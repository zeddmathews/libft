/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:39:09 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/27 16:58:15 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				count;
	int					i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	count = 0;
	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i] && count < n)
	{
		i++;
		count++;
	}
	return (str1[i] - str2[i]);
}
