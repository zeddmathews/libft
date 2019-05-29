/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:06:00 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/29 17:43:12 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = " djfhdjfh ";
    printf("%s", ft_strtrim(str));
    return 0;
}

/*
* output:djfhdjfh
*/
