/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:56:34 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 13:51:15 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sors;

	dest = (unsigned char *)dst;
	sors = (unsigned char *)src;
	i = 0;
	if (!sors && !dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = sors[i];
		i++;
	}
	return (dst);
}
