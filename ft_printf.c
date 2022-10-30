/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:58 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/30 12:57:26 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_printf_type(va_list args, char p)
{
	int	c;

	if (p == 'c')
		c += ft_printf_char(va_arg(args, unsigned char));
	if (p = 's')
		c += ft_printf_str(va_arg(args, char *));
	if (p == 'd')
		c += ft_printf_nbr(va_arg(args, int));
	if (p == 'i')
		c += ft_printf_nbr(va_arg(args, int));
	if (p == 'u')
	{
		if (va_arg(args, int) < 0)
			c += ft_printf_nbr(va_arg(args, int) * -1);
		c += ft_printf_nbr(va_arg(args, int));
	}
	if (p == 'x')
		c += ft_printf_nbr_hx(va_arg(args, int), 87);
	if (p == 'X')
		c += ft_printf_nbr_hx(va_arg(args, int), 55);
	//if (p == 'p')
	//	c += ft_printf_str((va_arg(args, char *)));
	return (c);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int 	y;

	i = 0;
	y = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == "%")
		{
			if (str[i+1] == '%')
				y += ft_printf_char('%');
			y += ft_print_type(args,str[i + 1]);
			i = i + 2;
		}
		y += ft_print_char(str);
		i++;
	}
	va_end(args);
} 