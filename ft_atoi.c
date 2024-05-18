/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:07:38 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/03/17 13:22:43 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	size_sign;

	i = 0;
	n = 0;
	size_sign = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			size_sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n *= 10;
		n += (str[i] - '0');
		i++;
	}
	if (size_sign == 1)
		n *= -1;
	return (n);
}
/*
int	main(void)
{
	char	*str;
	int		result;

	str = "12345";
	result = ft_atoi(str);
	printf("El número convertido es: %d\n", result);
	return (0);
}*/
