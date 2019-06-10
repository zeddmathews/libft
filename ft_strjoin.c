/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:03:32 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/10 15:47:34 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	
	if (!str) return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while(*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
