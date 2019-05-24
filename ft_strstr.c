/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:20:36 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/24 15:33:42 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int hay;
	int need;

	hay = 0;
	need = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[hay] != '\0')
	{
		while (needle[need] == haystack[hay + need]
				&& haystack [hay + need] != '\0'
				&& needle[need] != '\0')
		{
			if (needle[need + 1] == '\0')
				return ((char *)haystack + hay);
			need++;
		}
		hay++;
	}
	return (NULL);
}
