/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:09:43 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/12 17:27:10 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int c_word(const char *s, char c)
{
    size_t i;
    size_t o;
    o = 0;
    i = 0;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        if (s[i])
        {
            o++;
            while(s[i] && s[i] != c)
                i++;
        }
    }
    return (o);
}
char *g_word(char const *s, char c)
{
    char *word;
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while(s[len] != c)len++;
    word = malloc(len + 1);
    if (!word)return (NULL);
    while(i <= len - 1)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t len = c_word(s, c);
    char **arr = NULL;
    
    arr = (char **)malloc((len + 1)*(sizeof(char *)));
    if(!arr)
        return NULL;
    i = 0;
    j = 0;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        if(s[i])
        {
            arr[j++] = g_word(&s[i], c);
            while(s[i] && s[i] != c)i++;
        }
    }
    return (arr);
}