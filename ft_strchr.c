/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:07:19 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 11:30:38 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sym)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && sym == '\0')
		return ((char *)str + i);
	return (NULL);
}
