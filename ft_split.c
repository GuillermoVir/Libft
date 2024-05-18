/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvalenz <guvalenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:32:23 by guvalenz          #+#    #+#             */
/*   Updated: 2024/05/18 16:19:45 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t	ft_count_words(char const *s, char c)
{
	int		i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				words++;
				break ;
			}
		}
	}
	return (words);
}

static char	**ft_free(char **one, size_t z)
{
	while (z >= 0)
	{
		free(one[z]);
		z--;
	}
	free(one);
	return (NULL);
}

static char	**ft_loop(char const *s, char c, char **one, size_t z)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (j < i)
		{
			one[z] = ft_substr(s, j, i - j);
			if (!one[z])
				return (ft_free(one, z));
			z++;
		}
	}
	return (one);
}

char	**ft_split(char const *s, char c)
{
	char	**one;
	size_t	z;

	z = 0;
	one = ft_calloc(((size_t)ft_count_words(s, c) + 1), sizeof(char *));
	if (one == NULL)
		return (NULL);
	one = ft_loop(s, c, one, z);
	return (one);
}
/*
int	main(void)
{
    char *s;
    int i;
    char **res;
    
    s = "en un lugar de la mancha";
    res = ft_split(s, ' ');
    while (i < 6)
    {
        printf("[%d]: %s\n", i, res[i]);
        i++;
    }
    free(res);
    return (0);
}*/
