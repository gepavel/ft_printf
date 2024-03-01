/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:55:46 by gepavel           #+#    #+#             */
/*   Updated: 2024/03/01 14:40:08 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int nb, char base_set)
{
	int				count;
	char			*base;
	unsigned int	x;

	count = 0;
	x = nb % 16;
	if (base_set == 'x')
		base = "0123456789abcdef";
	if (base_set == 'X')
		base = "0123456789ABCDEF";
	if (nb > 15)
	{
		count = ft_printf_x(nb / 16, base_set);
		if (count == -1)
			return (-1);
	}
	if (x < 16)
	{
		if (ft_printf_c(base[nb % 16]) != 1)
			return (-1);
		count++;
	}
	return (count);
}
