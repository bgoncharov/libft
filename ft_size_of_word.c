/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_of_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:37:33 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/22 21:14:12 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size_of_word(char const *str, char c)
{
	size_t count;

	count = 0;
	while (*str != c && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
