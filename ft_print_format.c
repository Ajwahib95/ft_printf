/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:52:20 by awahib            #+#    #+#             */
/*   Updated: 2023/11/27 09:48:38 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(const char format, va_list ap)
{
	int length;

	length = 0;
	if (format == 'd' || format == 'i')
		length = ft_putnbr(va_arg(ap, int));
	if (format == 'X' || format == 'x')
		length = ft_puthex(va_arg(ap, unsigned int), format);
	if (format == 'c')
		length = ft_putchar(va_arg(ap, int));
	if (format == 's')
		length = ft_putstr(va_arg(ap, char *));
	if (format == 'u')
		length = ft_putnbr_u(va_arg(ap, unsigned int));
	if (format == '%')
		length = ft_putchar('%');
	if (format == 'p')
	{
		size_t address = va_arg(ap, size_t);
		if (address != 0)
		{
			length += ft_putstr("0x");
			length += ft_putaddr(address);
		}
		else
			length += ft_putaddr(address);
	}
	return (length);
}