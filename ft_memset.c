/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:05:16 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/22 09:36:49 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) //take string, put new character, replace character
{
	char			*alt;
	unsigned char	replace;
	size_t			count;

	alt = (char *)b;
	replace = (unsigned char *)c;
	count = 0;

	while (count < len)
	{
		alt[count] = replace;
		count++;
	}
	return (b);
}
