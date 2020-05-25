/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:05:28 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 11:23:11 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;
	size_t				i;

	if (src == dst)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (dst > src)
	{
		i = n;
		while (i-- > 0)
			str1[i] = str2[i];
	}
	else
	{
		i = 0;
		while (n > i)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
