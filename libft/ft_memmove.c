/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:31:03 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/10 18:53:53 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    const unsigned char *s;
    unsigned char *d;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    
    if(d == s || n == 0)
        return (dest);
    if (d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }    
    }
    else
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}