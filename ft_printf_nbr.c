/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:58:44 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/30 12:07:33 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

static int	s_nbr(int n)
{
	int	i;

	i = 2;
	if (n < 0)
		i = 3;
	while (n / 10 != 0)
	{
		if (n / 10 == 0)
			break ;
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_printf_nbr(int n)
{
	char	str[12];
	int		a;
	long	nbr;

	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	a = s_nbr(n) - 1;
	while (nbr > 0)
	{
		a--;
		str[a] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[s_nbr(n) - 1] = '\0';
	write(1, str, s_nbr(n));
	return (s_nbr(n));
}
