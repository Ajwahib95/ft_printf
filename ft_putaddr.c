/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:48:00 by awahib            #+#    #+#             */
/*   Updated: 2023/11/27 09:20:18 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(size_t nbr)
{
	char *base;
	int length;

	length = 0;
	if (!nbr)
		return (length += ft_putstr("(nil)"));
	base = "0123456789abcdef";
	if (nbr < 16)
		length += ft_putchar(base[nbr]);
	if (nbr >= 16)
	{
		length += ft_putaddr(nbr / 16);
		length += ft_putchar(base[nbr % 16]);
	}
	return (length);
}