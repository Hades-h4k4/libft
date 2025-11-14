/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:46:52 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/14 18:08:23 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	t_len;

	t_len = ft_strlen(s1);
	res = (char *)malloc((t_len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!(s1[i] == *set))
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	return (res);
}
