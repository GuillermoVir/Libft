/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvalenz <guvalenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:22:07 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/05/11 17:03:04 by guvalenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	carac;

	carac = (unsigned char)c;
	while (*s != carac)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int	main(void) {
  const char *str = "Hola mundo ";
    int find = 'm'; // Carácter que queremos buscar
    char *result = ft_strchr(str, find);

    if (result != 0) {
	printf("El carácter '%c' esta en: %s\n", find, result);
    } else {
        printf("El carácter '%c' no esta.\n", find);
    }

    return (0);
}*/
