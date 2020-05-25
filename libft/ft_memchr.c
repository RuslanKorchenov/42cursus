/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:04:47 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 13:58:46 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int val, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char*)src;
	while (n > i)
	{
		if (str[i] == val)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
