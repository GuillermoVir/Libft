/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:41:40 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/04/24 18:52:41 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	one;

	i = ft_strlen(s) - 1;
	one = (unsigned char)c;
	if (one == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (i >= 0)
	{
		if (s[i] == one)
			return ((char *)(i + s));
		i--;
	}
	return (NULL);
}
/*
 * int	main(void)
{
	char	p;

	p = "En un lugar de la mancha cuyo nombre no quiero recordar";
	printf("Dest: %s\n", ft_strrchr(p + 2, 'a'));
	printf("ORI: %s", strrchr(p + 2, 'a'));
	return (0);
}
*/
