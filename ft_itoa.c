/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:05:44 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/20 15:01:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char			*new;
	unsigned int	i;
	unsigned int	nbr;
	unsigned int	size;

	if (n < 0)
		nbr = (unsigned int)(n * -1);
	else
		nbr = (unsigned int)n;
	size = (unsigned int)ft_getnbsize(nbr);
	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if ((n < 0) && (new[i] = '-'))
		size++;
	i = size - 1;
	while (nbr >= 10)
	{
		new[i--] = (char)(nbr % 10 + 48);
		nbr /= 10;
	}
	new[i] = (char)(nbr % 10 + 48);
	new[size] = '\0';
	return (new);
}
