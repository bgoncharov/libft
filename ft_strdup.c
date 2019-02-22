/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:04:50 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/15 16:27:13 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char *temp;
	char *new;

	temp = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!temp)
		return (NULL);
	new = temp;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (new);
}
