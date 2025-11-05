/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:36:49 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/23 20:40:13 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	x;

	i = 0;
	str = (unsigned char *) s;
	x = (unsigned char ) c;
	while (i < n)
	{
		if (str[i] == x)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
