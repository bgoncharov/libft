/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:51:17 by bogoncha          #+#    #+#             */
/*   Updated: 2019/02/20 13:44:44 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	fill_arr(char const *s, char *arr, unsigned int i, char c)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		arr[j] = s[i];
		i++;
		j++;
	}
	arr[j] = '\0';
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * ft_strlen(s));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			arr[j] = ft_strnew(ft_size_of_word(&s[i], c));
			i = fill_arr(s, arr[j], i, c);
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
