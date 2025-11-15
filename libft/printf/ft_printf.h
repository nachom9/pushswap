/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:50:53 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/31 16:54:53 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	pft_putstr_fd(char *s, int fd, int count);
int	pft_putnbr_fd(int nb, int fd, int count);
int	pft_putchar_fd(char c, int fd, int count);
int	pft_putnsg(int nb, int count);
int	pft_putnbr_base(int nbr, int count);
int	pft_putnbr_base_up(int nbr, int count);
int	pft_putadr(unsigned long int nb, int count);

#endif
