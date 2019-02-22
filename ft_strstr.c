/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:19:02 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/13 20:03:54 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *string1, const char *string2)
{
	int pos;
	int i;

	if (!*string2)
		return ((char *)string1);
	pos = 0;
	while (string1[pos] != '\0')
	{
		if (string1[pos] == string2[0])
		{
			i = 1;
			while (string2[i] != '\0' && string1[pos + i] == string2[i])
				++i;
			if (string2[i] == '\0')
				return ((char *)&string1[pos]);
		}
		++pos;
	}
	return (0);
}
