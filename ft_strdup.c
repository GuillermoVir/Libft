/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:44 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/04/05 12:25:35 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1);
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (s1[0] == '\0')
		return (str);
	j = 0;
	while (i > 0)
	{
		str[j] = s1[j];
		j++;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	const char str[] = "hola";

	printf("str copiado: %s\n", ft_strdup(str));
	return (0);
}*/
