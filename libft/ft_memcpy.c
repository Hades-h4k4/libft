/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:16:55 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/10 18:40:47 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *s = (unsigned char *)src;
    unsigned char *d = (unsigned char *)dest;

    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}