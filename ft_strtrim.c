/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:16:51 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/29 17:42:45 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t i;
	size_t index;
	size_t alt;
	size_t back;
	char *str;

	i = 0;
	index = 0;
	back = -1;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		index++;
		back++;
	}
	if (s[i] != ' ' || s[i] != '\t' || s[i] != '\n')
	{
		while (s[index] != '\0')
		{
			index++;
			back++;
		}
	}
	if (s[back] == ' ' || s[back] == '\t' || s[back] == '\n')
	{
		while (s[back] == ' ' || s[back] == '\t' || s[back] == '\n')
			back--;
	}
	while (i < back)
	{
		str[alt] = s[i];
		i++;
		alt++;
	}
	str[alt] = '\0';
	return (str);
}
