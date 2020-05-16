/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:06:40 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/08 17:35:58 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words_count(const char *s, char c)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			cnt++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

int		word_size(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	if (!(str = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		str[k] = (char *)malloc(sizeof(char) * (word_size(&s[i], c) + 1));
		j = 0;
		while (s[i] != '\0' && s[i] != c)
			str[k][j++] = s[i++];
		if (j != 0)
			str[k++][j] = '\0';
	}
	str[k] = NULL;
	return (str);
}
