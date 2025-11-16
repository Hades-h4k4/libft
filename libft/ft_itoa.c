/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:01:00 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/16 16:41:33 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*out;
	int			len;
	long int	num;

	num = n;
	len = ft_numlen(num);
	out = malloc(len + 1);
	out[len] = '\0';
	if (!out)
		return (NULL);
	if (num == 0)
		return (ft_strdup("0"));
	if (num < 0)
	{
		num *= -1;
		out[0] = '-';
	}
	while (num != 0)
	{
		out[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (out);
}
