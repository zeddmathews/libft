/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:21:04 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/22 14:32:22 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*(char *dest, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
