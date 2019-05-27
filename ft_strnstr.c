/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 06:35:08 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/27 14:05:57 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		h;
	int		n;
	size_t	count;

	h = 0;
	n = 0;
	count = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[h] != '\0' && count < len)
	{
		while (needle[n] == haystack[h + n]
				&& haystack[h + n] != '\0'
				&& needle[n] != '\0')
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		h++;
	}
	return (NULL);
}
