/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:05:16 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/21 13:17:23 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) //take string, put new character, replace character
{
	char			*cpy;
	unsigned char	new_c;
	size_t			count;

	cpy = (char *)b;
	new_c = (unsigned char)c;
	count = 0;

	while (count < len)
	{
		cpy[count] = new_c;
		count++;
	}
	return (cpy);
}
