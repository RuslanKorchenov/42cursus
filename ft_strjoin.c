/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:08:07 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/07 11:31:09 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
		str[i++] = s1[len++];
	len = 0;
	while (s2[len] != '\0')
		str[i++] = s2[len++];
	str[i] = '\0';
	return (str);
}
