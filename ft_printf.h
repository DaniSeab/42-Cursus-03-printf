/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:39:11 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/25 00:15:57 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define SYS_NIL "(nil)"

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_isdigit(int ch);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int u);
int	ft_puthexa(unsigned int x, int signal);
int	ft_putptr(unsigned long ptr);
int	ft_printf(const char *str, ...);

#endif
