/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:39:11 by dlima-se          #+#    #+#             */
/*   Updated: 2022/10/18 03:09:09 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_isdigit(int ch);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int u);
int	ft_puthexa(unsigned int x, int signal);
int	ft_putptr(void *pointer);
int	ft_printf(const char * str, ...);