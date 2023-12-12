/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:40:31 by awahib            #+#    #+#             */
/*   Updated: 2023/12/12 10:57:06 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(const char format, va_list ap);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int nbr, char format);
int	ft_putnbr_u(unsigned int n);
int	ft_putaddr(size_t nbr);

#endif