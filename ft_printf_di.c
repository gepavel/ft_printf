/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:33:35 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/29 17:13:42 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(int nb)
{
	int			count;
	long int	n;
	int			sign;

	count = 0;
	n = nb;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		if (ft_printf_c('-') != 1)
			return (-1);
		sign = 1;
	}
	count = ft_printf_u(n);
	if (count == -1)
		return (-1);
	return (count + sign);
}
