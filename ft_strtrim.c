/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:32:56 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 15:41:25 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_in_set(char ch, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (end > i && is_in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, i, end - i));
}
