/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:14:43 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/13 15:35:11 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (destptr[i] != '\0')
		++i;
	j = 0;
	while (srcptr[j] != '\0')
	{
		destptr[i] = srcptr[j];
		i++;
		++j;
	}
	destptr[i] = '\0';
	return (destptr);
}
