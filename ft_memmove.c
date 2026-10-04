/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 08:30:39 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/21 10:37:21 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*sors;

	des = (unsigned char *)dest;
	sors = (unsigned char *)src;
	if (!des || !sors)
		return (NULL);
	if (des > sors)
	{
		while (len--)
			des[len] = sors[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			des[i] = sors[i];
			i++;
		}
	}
	return (dest);
}
