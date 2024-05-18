/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvalenz <guvalenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:20:57 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/05/15 15:59:44 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*one;
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = start;
	x = ft_strlen(s) - start;
	if (!s)
		return (ft_calloc(1, 1));
	if (j >= ft_strlen(s) || s[0] == '\0' || len == 0)
		return (ft_calloc(1, 1));
	if (x < len)
		one = ft_calloc(x + 1, sizeof(char));
	else
		one = ft_calloc(len + 1, sizeof(char));
	if (one == NULL)
		return (NULL);
	while (i < len && s[j])
	{
		one[i] = s[j];
		i++;
		j++;
	}
	return (one);
}
/*
int main(void)
{
    char *uno;
    uno = "En-un-lugar-de-la-mancha-cuyo-nombre-no-quiero-recordar";

    printf("Resutado:%s", ft_substr(uno, 16, 10000));
}*/
