/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 09:10:36 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 15:35:55 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str_len >= 0)
	{
		if (str[str_len] == (char)ch)
			return ((char *)&str[str_len]);
		str_len--;
	}
	return (NULL);
}
