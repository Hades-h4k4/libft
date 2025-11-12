/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:38:17 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/10 18:40:43 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *st1 = (unsigned char *)s1;
    unsigned char *st2 = (unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if(st1[i] != st2[i])
            return (st1[i] - st2[i]);
        i++;
    }
    return (0);
}