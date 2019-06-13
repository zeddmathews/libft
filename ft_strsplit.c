/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:41:05 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/13 15:54:09 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcnt(const char *s, char c)
{
	unsigned int s_count;

	s_count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
			s_count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (s_count);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		k;
	int		ai;
	char	**sa;

	i = 0;
	ai = 0;
	if (!s || !(sa = (char **)malloc(sizeof(char *) * (ft_strcnt(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > k)
		{
			sa[ai] = ft_strsub(s, k, i);
			ai++;
		}
		sa[ai] = NULL;
		return (sa);
	}
	return (0);
}
