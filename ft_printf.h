/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:14:23 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 17:20:13 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_printf_c(int c);
int		ft_printf_s(const char *str);
int		ft_printf_di(int nb);
int		ft_printf_u(unsigned int nb);
int		ft_printf_p(unsigned long int n);
int		ft_printf_x(unsigned int nb, char base_set);

#endif