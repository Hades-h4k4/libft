/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:11 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/10 18:40:58 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str = (unsigned char *)s;
    unsigned char val = (unsigned char)c;

    i = 0;
    while(i < n)
    {
        str[i] = val;
        i++;
    }
    return (s);
}