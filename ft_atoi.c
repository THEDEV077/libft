/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:29:56 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/19 10:19:48 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	r;
	int		s;
	int		i;
	long	o;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		o = r;
		r = r * 10 + (str[i] - '0');
		if (r / 10 != o)
			return (check(s));
		i++;
	}
	return ((int)(r * s));
}
