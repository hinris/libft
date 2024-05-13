/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:05:48 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/13 21:27:43 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	words;

	words = 0;
	if (!c)
		return (words + 1);
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			words++;
		while (*s && *s != c)
			++s;
	}
	return (words);
}

static int	ft_split2(char **list, char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			list[i] = ft_substr(s, 0, len);
			if (!list[i++])
				return (0);
			s += len;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	i = 0;
	list = ft_calloc((words + 1), sizeof(char *));
	if (!list)
		return (NULL);
	if (!ft_split2(list, s, c))
	{
		while (i < words)
		{
			free(list[i++]);
		}
		free(list);
		return (NULL);
	}
	return (list);
}
/* int main(void)
{
	char *str = "test without seps";
	char **test;

	test = ft_split(str, 0);
	for (int i = 0 ; test[i]; i++)
	{
		printf("%s\n", test[i]);
		free(test[i]);
	}
	free(test);
	char *str2 = "estou farto do libft fr fr";
	char **test2;
	char *test_words = "i have exactly 6 words :)";

	printf("should be 6: %d\n", count_words(test_words, ' '));
	test2 = ft_split(str2, ' ');
	for (int i = 0 ; test2[i]; i++)
	{
		printf("%s\n", test2[i]);
		free(test2[i]);
	}
	free(test2);
	return 0;
} */
