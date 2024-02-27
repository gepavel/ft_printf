/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:33:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 17:24:33 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(const char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (ft_printf_s("(null)"));
	while (str[i] != '\0')
	{
		if (ft_printf_c(str[i]) == - 1)
			return (-1);
		i++;
	}
	return (i);
}
