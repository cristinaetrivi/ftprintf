/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_hx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:26:23 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/30 12:36:19 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_printf_nbr_hx(int str, int x)
{
	int	hex;
	int	mod;
	
	hex = str / 16;
	if (hex < 10)
		hex = hex + 48;
	else
		hex = hex + x;
	mod = str % 16;
	if (mod < 10)
		mod = mod + 48;
	else
		mod = mod + x;
	write(1, &hex, 1);
	write(1, &mod, 1);
	return (0);
}