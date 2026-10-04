/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:25:42 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 14:00:53 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*news;

	if (!s1 || !s2)
		return (NULL);
	news = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!news)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		news[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		news[i] = s2[j];
		j++;
		i++;
	}
	news[i] = '\0';
	return (news);
}
