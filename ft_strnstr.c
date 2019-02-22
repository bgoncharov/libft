/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:04:12 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/15 23:11:39 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*src;
	char	*find;
	size_t	size;

	if (*s1 == '\0')
		return (NULL);
	src = (char *)s1;
	find = (char *)s2;
	size = ft_strlen(find);
	if (!(*find))
		return ((char*)s1);
	if (size == 0)
		return (char *)(src);
	if (size > n)
		return ((char *)NULL);
	while (n-- >= size && *src)
	{
		if (ft_strncmp(src, find, size) == 0)
			return ((char *)src);
		src++;
	}
	return ((char *)NULL);
}
