/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:33:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/27 18:39:20 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(const char *str)
{
	int			i;
	int			x;

	i = 0;
	x = 0;
	if (str == NULL)
		return (ft_printf_s("(null)"));
	while (str[i])
	{
		x = (int)write (1, &str[i], 1);
		if (x == -1)
			return (-1);
		i++;
	}
	return (i);
}
