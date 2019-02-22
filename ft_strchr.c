/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:26:07 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/20 18:41:08 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string)
	{
		if (*string == symbol)
			return ((char*)string);
		++string;
	}
	if (symbol == '\0')
		return ((char*)string);
	return (0);
}
