/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:42:37 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/10 18:23:45 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dsti;
	size_t srci;

	dsti = 0;
	srci = 0;
	while (dst[dsti] && dsti < dstsize - 1)
		dsti++;
	while (dsti + srci < dstsize - 1 && src[srci])
	{
		dst[dsti + srci] = src[srci];
		dsti++;
		srci++;
	}
	if (dsti + srci < dstsize)
	{
		dst[dsti + srci] = '\0';
		return ((ft_strlen(dst) + ft_strlen(src)));
	}
	return (0);
}
