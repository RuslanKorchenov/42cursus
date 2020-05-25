/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:06:40 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/24 12:04:31 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words_count(const char *s, char c)
{
	int	cnt;
	int	i;

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
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

void	memfree(char **arr)
{
	while (arr)
	{
		while (*arr)
			free(*arr++);
		free(arr);
	}
}

char	**copy_words(char **str, char const *s, char c, int count_word)
{
	int	j;
	int	k;

	j = 0;
	while (*s && j < count_word)
	{
		k = 0;
		while (*s == c)
			s++;
		if (!(str[j] = (char *)malloc(sizeof(char) *
			(word_size(s, c) + 1))))
		{
			memfree(str);
			return (NULL);
		}
		while (*s != '\0' && *s != c)
			str[j][k++] = *(s++);
		str[j++][k] = '\0';
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (s == NULL)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1))))
		return (NULL);
	str = copy_words(str, s, c, words_count(s, c));
	return (str);
}
