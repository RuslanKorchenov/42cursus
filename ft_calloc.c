/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:00:36 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/06 17:23:31 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *str;

	if (!(str = (unsigned char *)malloc(size * count)))
		return (NULL);
	ft_memset(str, 0, count);
	return (str);
}
