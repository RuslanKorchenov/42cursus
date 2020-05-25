/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:09:10 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 11:35:25 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	char			*pointer;
	unsigned int	i;

	i = 0;
	pointer = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == sym)
			pointer = (char *)str + i;
		i++;
	}
	if (pointer == NULL)
		if (str[i] == '\0' && sym == '\0')
			return ((char *)str + i);
	return (pointer);
}
