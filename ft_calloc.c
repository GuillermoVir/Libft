/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:06:41 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/03/26 19:45:34 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			tam;
	unsigned char	*str;

	i = 0;
	tam = count * size;
	str = malloc(tam);
	if (str == 0)
		return (0);
	while (i < tam)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
/*
int main() {

	char *str;
 	str = ft_calloc(5, sizeof(char));
	return 0;
}
*/
