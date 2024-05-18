/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvalenz <guvalenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:28:40 by guvalenz          #+#    #+#             */
/*   Updated: 2024/05/18 15:18:56 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_numbers(int n)
{
	size_t	digits;
	int		i;

	digits = 0;
	i = n;
	if (i == 0)
		digits = 1;
	if (i < 0)
		i = (i * -1);
	while (i > 0)
	{
		i = i / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*one;
	size_t	i;

	i = ft_count_numbers(n) - 1;
	if (n < 0)
	{
		one = ft_calloc(ft_count_numbers(n) + 2, sizeof(char));
		one[0] = '-';
		n = n * -1;
		i++;
	}
	else
		one = ft_calloc(ft_count_numbers(n) + 1, sizeof(char));
	if (one == NULL)
		return (NULL);
	if (n == 0)
		one[0] = 48;
	while (n > 0)
	{
		one[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	return (one);
}
/*
int	main(void)
{
	int n = -1564123654;
	size_t z = ft_count_numbers(n);
	//printf ("numero de digitos %zu", ft_count_numbers(n));
	printf("Resultado %s", new_str(n, z));
	//printf ("Resultado %s", ft_itoa(n));
}*/