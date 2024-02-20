/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:53:54 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 14:39:27 by gepavel          ###   ########.fr       */
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
		count += ft_printf_c(n % 16 + '0');
	if (nb > 9)
		count += ft_printf_c((n % 16 - 10) + 'a');
	return (count);
}

int	ft_printf_p(unsigned long int n)
{
	int		count;

	if (n == 0)
		return (ft_printf_s("0x0"));
	count = ft_printf_s("0x");
	count += ft_print_adress(n, 0);
	return (count);
}
