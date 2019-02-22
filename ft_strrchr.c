/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:40:00 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/15 18:30:56 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *string, int symbol)
{
	char *last;

	last = (0);
	while (*string)
	{
		if (*string == symbol)
			last = (char*)string;
		++string;
	}
	if (last)
		return (last);
	if (symbol == '\0')
		return ((char*)string);
	return (0);
}
