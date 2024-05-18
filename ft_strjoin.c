/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:35:06 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/04/09 14:11:26 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*one;
	int		i;
	int		j;

	i = 0;
	j = 0;
	one = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof (char));
	if (one == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		one[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		one[i] = s2[j];
		i++;
		j++;
	}
	one[i] = '\0';
	return (one);
}
/*int main(void)
{
    char    *str1;
    char    *str2;

    str1 = "Prim-";
    str2 = "";
    
    printf("union: %s", ft_strjoin(str1, str2));
}
*/
