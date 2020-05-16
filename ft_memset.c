/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:05:41 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 11:23:42 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned int	i;
	char			*s;

	s = (char *)memptr;
	i = 0;
	while (num-- > 0)
		s[i++] = (char)val;
	return (memptr);
}
