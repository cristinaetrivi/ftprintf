/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:58 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/27 10:52:50 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str[i]);
	while (str[i])
	{
		if (str[i] == "%")
		{
			
		}
		
		i++;	
	}
	va_end();
} 