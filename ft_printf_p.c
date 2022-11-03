/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:15:46 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/03 19:03:15 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	s_nbr(unsigned long long n)
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

static int	ft_printf_nbr_p(unsigned long long n)
{
	char				str[18];
	int					a;
	unsigned long long	nbr;

	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	a = s_nbr(nbr) - 1;
	str[a] = '\0';
	while (nbr > 0)
	{
		a--;
		if ((nbr % 16) < 10)
			str[a] = (nbr % 16) + '0';
		else
			str[a] = (nbr % 16) + 87;
		nbr = nbr / 16;
	}
	return (ft_printf_str(str));
}

int	ft_printf_p(void *p)
{
	int					i;
	unsigned long long	ad;

	ad = (unsigned long long ) p;
	i = 2;
	write(1, "0x", 2);
	if (p == NULL)
	{
		write(1, "0", 1);
		i++;
		return (i);
	}
	i += ft_printf_nbr_p(ad);
	return (i);
}
