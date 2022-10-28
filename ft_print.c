/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:58 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/28 16:15:39 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"
#include "libft.h"

int ft_print_type(va_list args, char p)
{
	int	c;

	if (p == 'c')
		c += ft_print_char(va_arg(args,unsigned char));
	if (p = 's')
		ft_print_str(va_arg(args, char *));
	if (p == 'd')
		ft_print_nbr(());
	
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
			y += ft_print_type(args,str[i + 1]);
			i = i + 2;
		}
		y += ft_print_char(str);
		i++;
	}
	va_end(args);
} 