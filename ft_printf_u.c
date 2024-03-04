/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:42:39 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/29 17:03:02 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int nb)
{
	int			count;

	count = 0;
	if (nb >= 10)
	{
		count = ft_printf_u(nb / 10);
		if (count == -1)
			return (-1);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		if (ft_printf_c(nb + '0') == -1)
			return (-1);
		count++;
	}
	return (count);
}
