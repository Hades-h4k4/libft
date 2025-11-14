/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carltruj <carltruj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:01:00 by carltruj          #+#    #+#             */
/*   Updated: 2025/11/14 18:06:46 by carltruj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char        *out;
	int         len;
	int         neg;
	long int    num;
	long int    temp;

	neg = 0;
	len = 0;
	num = n;
	temp = num;
	if (num == 0)
		return (ft_strdup("0"));
	if (num < 0)
	{
		neg = 1;
		num *= -1;
		len++;
	}
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	while (num != 0)
	{
		out[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (neg)
		out[0] = '-';
	return (out);
}
