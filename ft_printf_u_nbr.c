/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:43:07 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/02 20:07:10 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	s_nbr(long n)
{
	int	i;

	i = 2;
	while (n / 10 != 0)
	{
		if (n / 10 == 0)
			break ;
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_printf_u_nbr(int n)
{
	char	str[12];
	int		a;
	long	nbr;

	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	if (n < 0)
		nbr = n + 4294967296;
	a = s_nbr(nbr) - 1;
	str[a] = '\0';
	while (nbr > 0)
	{
		a--;
		str[a] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ft_printf_str(str));
}
