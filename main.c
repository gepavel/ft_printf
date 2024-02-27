/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:59:47 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/20 18:19:14 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	printf("\n ===============================\n");
    printf("=          ft_printf         	=\n");
    printf(" ===============================\n\n");

	printf("\033[0;35m----->[%%c]<-----\033[0m\n");
	char		c = 'c';
	int			x = 0;
		
	x = ft_printf("<%c", c);
	printf("-%d-\n", x);
	x = printf(">%c", c);
	printf("-%d-\n", x);

	printf("\033[0;35m----->[%%s]<-----\033[0m\n");

	char	str[] = "hello world";

//	x = ft_printf(" NULL %s NULL ", (char *)0);
	printf("-%d-\n", x);
	x = printf(">%s", str);
	printf("-%d-\n", x);
/*
	printf("\033[0;35m----->[%%p]<-----\033[0m\n");
	
	
	x = ft_printf(" NULL %s NULL ", (char *)0);
	printf("-%d-\n", x);
	x = printf(">%s", str);
	printf("-%d-\n", x);
*/

	printf("\033[0;35m----->[%%di]<-----\033[0m\n");

	x = ft_printf(">%d~%i\n", INT_MAX, INT_MIN);
	printf("-%d-\n", x);
	x = printf(">%d~%i\n", INT_MAX, INT_MIN);
	printf("-%d-\n", x);

	printf("\033[0;35m----->[errors]<-----\033[0m\n");

	x = ft_printf("\001\002\007\v\010\f\r\n");
	printf("-%d-\n", x);
	x = printf("\001\002\007\v\010\f\r\n");
	printf("-%d-\n", x);

	return (0);
}