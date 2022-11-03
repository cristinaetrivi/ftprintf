/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_hx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:26:23 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/03 19:00:36 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	s_nbr(long n)
{
	int	i;

	i = 2;
	while (n / 16 != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int	ft_printf_nbr_hx(long n, int x)
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
		if ((nbr % 16) < 10)
			str[a] = (nbr % 16) + '0';
		else
			str[a] = (nbr % 16) + x;
		nbr = nbr / 16;
	}
	return (ft_printf_str(str));
}
