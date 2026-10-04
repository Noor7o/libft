/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndwairi <ndwairi@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:41:36 by ndwairi           #+#    #+#             */
/*   Updated: 2026/09/20 14:05:43 by ndwairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	digit_count(int n)
{
	long	nb;
	size_t	count;

	count = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (n < 0)
	{
		count = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	char	*num;

	nb = n;
	i = digit_count(n);
	num = malloc (sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	num[i] = '\0';
	if (nb == 0)
		num[0] = '0';
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		num[--i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (num);
}
