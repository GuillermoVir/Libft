/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:26:52 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/03/16 19:57:36 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = strdup("HOLA");
	str2 = ft_toupper(str);
	printf("%s\n", str2);
	return (0);
}*/
