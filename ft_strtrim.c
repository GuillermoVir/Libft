/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvalenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:08:29 by guvalenz          #+#    #+#             */
/*   Updated: 2024/04/26 12:52:42 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*one;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	else
	{
		end = ft_strlen(s1);
		while (s1[start] && ft_strrchr(set, s1[start]))
			start++;
		while (end > start && s1[end -1] && ft_strrchr(set, s1[end -1]))
			end--;
		one = ft_calloc(end - start + 1, sizeof(char));
		if (one == NULL)
			return (NULL);
		else
			ft_strlcpy(one, &s1[start], end - start + 1);
	}
	return (one);
}

/*int main(void)
{
	char *one = "012el-un-lugar12-de-la-mancha012012010210";
	char *erase = "012";
	//debe devolver "el-un-lugar12-de-la-mancha"
	printf("%s\n", ft_strtrim("", ""));
}*/
