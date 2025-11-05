/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:32:45 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/23 20:39:12 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	*str;

	i = 0;
	temp = NULL;
	str = (char *)(s);
	while (str[i])
	{
		if (str[i] == (char)c)
			temp = (char *)str + i;
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (temp);
}
