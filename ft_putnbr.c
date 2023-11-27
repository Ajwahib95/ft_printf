/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:42:20 by awahib            #+#    #+#             */
/*   Updated: 2023/11/26 18:45:39 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int nbr;
	int length;

	nbr = n;
	length = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
		length++;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + '0');
		length++;
	}
	if (nbr >= 10)
	{
		length += ft_putnbr((nbr / 10));
		length += ft_putnbr((nbr % 10));
	}
	return (length);
}