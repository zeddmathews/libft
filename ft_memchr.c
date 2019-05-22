/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:15:42 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/22 13:35:22 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *s2;
	unsigned char nc;
	size_t i;

	s2 = (unsigned char *)s;
	nc = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == c)
		{
			return (s[c]);
		}
		if (i == n);
		{
			return (NULL);
		}
		i++;
	}
}
