/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:16:06 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 13:50:14 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *p, int value, size_t num)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	i = 0;
	while (i < num)
	{
		ptr[i] = (unsigned char ) value;
		i++;
	}
	return (p);
}
