/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:07:46 by awahib            #+#    #+#             */
/*   Updated: 2023/12/12 10:47:44 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char	*base;
	int		length;

	base = "0123456789";
	length = 0;
	if (n >= 10)
		length += ft_putnbr_u((n / 10));
	length += ft_putchar(base[(n % 10)]);
	return (length);
}
