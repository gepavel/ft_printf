/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:55:46 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 14:45:43 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_strcpy(char *dst, const char *src)
{
	size_t		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	ft_printf_x(unsigned int nb, char base_set)
{
	int		count;
	char	base[16];

	count = 0;
	if (base_set == 'x')
		ft_strcpy(base, "0123456789abcdef");
	else if (base_set == 'X')
		ft_strcpy(base, "0123456789ABCDEF");
	if (nb > 15)
		count += ft_printf_x(nb / 16, base_set);
	count += ft_printf_c(base[nb % 16]);
	return (count);
}
