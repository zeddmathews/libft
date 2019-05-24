/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:32:34 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/24 14:18:03 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst1;
	unsigned char *src1;
	unsigned char replace;
	size_t i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	replace = c;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == c)
		{
			return (dst1[i + 1]);
		}
		i++;
	}
	return (NULL);
}
