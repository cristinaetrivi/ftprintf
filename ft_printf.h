/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:28:45 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/02 20:07:40 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_printf_char(int c);
int	ft_printf_str(char *str);
int	abs_sign(int n);
int	ft_printf_nbr(int n);
int	ft_printf_u_nbr(int n);
int	ft_printf_nbr_hx(long str, int x);
int	ft_printf_p(void *str);

#endif