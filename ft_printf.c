/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:31:58 by gepavel           #+#    #+#             */
/*   Updated: 2024/03/01 13:30:27 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(va_list arg, char format)
{
	if (format == 'c')
		return (ft_printf_c(va_arg(arg, int)));
	if (format == 's')
		return (ft_printf_s(va_arg(arg, const char *)));
	if (format == 'p')
		return (ft_printf_p(va_arg(arg, unsigned long int)));
	if (format == 'i' || format == 'd')
		return (ft_printf_di(va_arg(arg, int)));
	if (format == 'u')
		return (ft_printf_u(va_arg(arg, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_printf_x(va_arg(arg, unsigned int), format));
	if (format == '%')
		return (ft_printf_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	unsigned int	x;
	int				aux;

	va_start(arg, format);
	x = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			aux = ft_check_format(arg, *format++);
			if (aux == - 1)
				return (-1);
			x += aux;
		}
		else
		{
			if (ft_printf_c(*format++) != 1)
				return (-1);
			x++;
		}
	}
	return (x);
}
