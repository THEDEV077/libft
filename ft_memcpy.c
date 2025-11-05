/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:10:27 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/17 12:37:19 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp1 = (unsigned char *) dst;
	temp2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return (dst);
}
