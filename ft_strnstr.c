/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 08:44:03 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/21 12:14:59 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *sentence, const char *word, size_t len)
{
	size_t	i_sent;
	size_t	j_word;

	i_sent = 0;
	if (*word == '\0')
		return ((char *)sentence);
	if (*sentence == '\0')
		return (NULL);
	while (i_sent < len && sentence[i_sent] != '\0')
	{
		j_word = 0;
		while (word[j_word] != '\0'
			&& (sentence[i_sent + j_word] == word[j_word])
			&& i_sent + j_word < len)
		{
			j_word++;
		}
		if (word[j_word] == '\0')
			return ((char *)(&sentence[i_sent]));
		i_sent++;
	}
	return (NULL);
}
