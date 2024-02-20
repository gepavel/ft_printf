/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:42:39 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 14:33:38 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int nb)
{
	int			count;

	count = 0;
	if (nb > 9)
		count += ft_printf_di(nb / 10);
	count += ft_printf_c(nb % 10 + '0');
	return (count);
}
