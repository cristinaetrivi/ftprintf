/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:58 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/02 20:07:16 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_type(va_list args, char p)
{
	int	c;

	c = 0;
	if (p == 'c')
		c += ft_printf_char(va_arg(args, int));
	if (p == 's')
		c += ft_printf_str(va_arg(args, char *));
	if (p == '%')
		c += ft_printf_char('%');
	if (p == 'i' || p == 'd')
		c += ft_printf_nbr(va_arg(args, int));
	if (p == 'u')
		c += ft_printf_u_nbr(va_arg(args, int));
	if (p == 'x')
		c += ft_printf_nbr_hx(va_arg(args, int), 87);
	if (p == 'X')
		c += ft_printf_nbr_hx(va_arg(args, int), 55);
	if (p == 'p')
		c += ft_printf_p((va_arg(args, void *)));
	return (c);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		y;

	i = 0;
	y = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			y += ft_printf_type(args, str[i]);
			i++;
		}
		else
		{
			y += ft_printf_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (y);
}
