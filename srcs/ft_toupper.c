/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:38:57 by zmathews          #+#    #+#             */
/*   Updated: 2019/05/20 15:36:01 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		return (c - 32);
	if ((c > 64) && (c < 91))
		return (c);
	else
		return (0);
}
