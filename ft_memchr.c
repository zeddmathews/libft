/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:15:42 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/06 14:40:26 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	nc;
	size_t			i;

	s2 = (unsigned char *)s;
	nc = (unsigned char)c;
	i = 0;
	while (i < n && s2[i])
	{
		if (s2[i] == nc)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
