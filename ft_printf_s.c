/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:33:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/03/01 13:32:02 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(const char *str)
{
	int			i;

	i = 0;
	if (str == NULL)
		return (ft_printf_s("(null)"));
	while (str[i])
	{
		if (write (1, &str[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}
