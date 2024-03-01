/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:53:54 by gepavel           #+#    #+#             */
/*   Updated: 2024/03/01 13:39:53 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_adress(unsigned long int n, int count)
{
	int		nb;

	nb = n % 16;
	if (n >= 16)
		count += ft_print_adress(n / 16, count);
	if (nb < 10)
	{
		if (ft_printf_c(n % 16 + '0') != 1)
			return (-1);
		count++;
	}
	if (nb > 9)
	{
		if (ft_printf_c(n % 16 - 10 + 'a') != 1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_printf_p(unsigned long int n)
{
	int		count;

	if (n == 0)
		return (ft_printf_s("0x0"));
	count = ft_printf_s("0x");
	if (count == -1)
		return (-1);
	count += ft_print_adress(n, 0);
	return (count);
}
