/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:42:37 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/23 17:51:11 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t p;									// may not be needed

	i = 0;
	j = 0;
	p = ft_strlen(dst);							// ^
	while (dst[i] &&  i < dstsize)
	{
		i++;
	}
	while (i + j < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
	{
		dst[i + j] = '\0';
		return (ft_strlen(src) + 2);
	}
	else
		return (0);
}
