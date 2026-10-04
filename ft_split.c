/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:42:23 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/21 12:02:50 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
	return (NULL);
}

static int	word_count(char const *str, char ch)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ch && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ch)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**helper(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
			return (free_all(arr, j));
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
		return (NULL);
	return (helper(s, c, arr));
}
