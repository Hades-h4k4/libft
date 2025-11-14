/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:30:10 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/14 18:02:00 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_substr_len(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	if (len >= s_len - start)
		return (s_len - start);
	return (len);
}

char	*ft_if_zero(void)
{
	char	*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	real_len;
	char	*sub;

	if (!s)
		return (NULL);
	real_len = ft_substr_len(s, start, len);
	if (real_len == 0)
	{
		ft_if_zero();
	}
	sub = malloc((real_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < real_len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
