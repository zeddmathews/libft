/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:16:51 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/13 09:03:40 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	index;
	size_t	j;
	char	*str;

	i = 0;
	index = 0;
	j = 0;
	while (s[index] == ' ' || s[index] == '\t' || s[index] == '\n')
		index++;
	i = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\0' || s[i] == '\t' || s[i] == '\n')
		if (i-- == index)
		{
			str = (char *)malloc(sizeof(char) * ((i - index) + 1));
			return (str);
		}
	if (!(str = (char *)malloc(sizeof(char) * ((i - index) + 1))))
		return (NULL);
	while (index < i + 1)
		str[j++] = s[index++];
	str[j] = '\0';
	return (str);
}
