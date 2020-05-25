/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:02:23 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/06 17:43:10 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isnegative(int *n, int *neg, int *len)
{
	if (*n < 0)
	{
		*neg = -1;
		*len = *len + 1;
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 1;
	len = 1;
	ft_isnegative(&n, &neg, &len);
	i = n;
	while (i /= 10)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (neg == -1)
		str[0] = '-';
	str[--len] = n % 10 + '0';
	while (n /= 10)
		str[--len] = n % 10 + '0';
	return (str);
}
