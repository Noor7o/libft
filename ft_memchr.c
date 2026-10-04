/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:11:36 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 15:19:47 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int value, size_t n)
{
	size_t			i;
	unsigned char	val;
	unsigned char	*st;

	i = 0;
	val = (unsigned char )value;
	st = (unsigned char *)str;
	if (!st)
		return (NULL);
	while (i < n)
	{
		if (st[i] == val)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
