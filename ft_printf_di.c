/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:33:35 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 14:33:28 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(int nb)
{
	int			count;
	long int	n;

	count = 0;
	n = nb;
	if (n < 0)
	{
		n *= -1;
		count += ft_printf_c('-');
	}
	if (n > 9)
		count += ft_printf_di(n / 10);
	count += ft_printf_c(n % 10 + '0');
	return (count);
}
