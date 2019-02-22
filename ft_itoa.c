/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:05:44 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/22 15:56:57 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	*str;
	
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (0);
	str[j] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < j--)
	{
		str[j] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
