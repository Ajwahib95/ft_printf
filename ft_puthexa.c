/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:40:35 by awahib            #+#    #+#             */
/*   Updated: 2023/11/26 22:27:41 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(unsigned int nbr, char *base, char format)
{
	int	length;

	length = 0;
	if (nbr < 16)
		length += ft_putchar(base[nbr]);
	if (nbr >= 16)
	{
		length += ft_puthex(nbr / 16, format);
		length += ft_puthex(nbr % 16, format);
	}
	return (length);
}

int	ft_puthex(unsigned int nbr, char format)
{
	char	*base;
	int		length;

	length = 0;
	if (format == 'X')
	{
		base = "0123456789ABCDEF";
		length += ft_convert(nbr, base, format);
	}
	else if (format == 'x')
	{
		base = "0123456789abcdef";
		length += ft_convert(nbr, base, format);
	}
	return (length);
}
