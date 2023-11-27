/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:40:20 by awahib            #+#    #+#             */
/*   Updated: 2023/11/27 10:23:36 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		length;
	int		i;

	va_start(ap, format);
	length = 0;
	i = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[++i] == '\0')
				return (-1);
			length += ft_print_format(format[i], ap);
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
	return (length);
}
