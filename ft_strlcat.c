/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:06:25 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/03/17 11:02:35 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *str, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(str);
	j = ft_strlen(dest);
	k = 0;
	if (dstsize < j || dstsize == 0)
		return (i + dstsize);
	while (str[k] && j + k < dstsize - 1)
	{
		dest[j + k] = str[k];
		k++;
	}
	dest[j + k] = '\0';
	return (j + i);
}
