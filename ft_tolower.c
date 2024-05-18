/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:31:41 by hvalenzu          #+#    #+#             */
/*   Updated: 2024/03/15 13:14:46 by hvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = strdup("HOLA");
	str2 = ft_tolower(str);
	printf("%s\n", str2);
	return (0);
}
*/