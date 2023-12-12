/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:52:20 by awahib            #+#    #+#             */
/*   Updated: 2023/12/12 10:54:38 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(const char format, va_list ap)
{
	int		length;
	size_t	address;

	length = 0;
	if (format == 'd' || format == 'i')
		length = ft_putnbr(va_arg(ap, int));
	else if (format == 'X' || format == 'x')
		length = ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == 'c')
		length = ft_putchar(va_arg(ap, int));
	else if (format == 's')
		length = ft_putstr(va_arg(ap, char *));
	else if (format == 'u')
		length = ft_putnbr_u(va_arg(ap, unsigned int));
	else if (format == '%')
		length = ft_putchar('%');
	else if (format == 'p')
	{
		address = va_arg(ap, size_t);
		if (address != 0)
			length += ft_putstr("0x") + ft_putaddr(address);
		else
			length += ft_putaddr(address);
	}
	return (length);
}
