/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:25:41 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/17 12:35:54 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
