/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:37:51 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/17 13:18:04 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp1;
	char	*temp2;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	if (dst == src)
		return (dst);
	temp1 = (char *)dst;
	temp2 = (char *)src;
	i = 0;
	if (temp2 < temp1)
	{
		while (len-- > 0)
			temp1[len] = temp2[len];
	}
	else
	{
		while (i < len)
		{
			temp1[i] = temp2[i];
			i++;
		}
	}
	return (dst);
}
