/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:18:16 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/04/09 13:11:10 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (dst == src || !n)
		return (dst);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
