/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:16:02 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/27 16:55:17 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int second;

	i = 0;
	second = -1;
	if (c == '\0')
		return ((char *)s);
	while (s[i] != '\0')
	{
		i++;
		second++;
	}
	i = second;
	while (s[i] >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		second--;
	}
	return (NULL);
}
