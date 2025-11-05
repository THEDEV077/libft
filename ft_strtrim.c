/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:32:15 by ysahnoun          #+#    #+#             */
/*   Updated: 2025/10/24 15:12:44 by ysahnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	isin(const char *str, char x)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == x)
			return (1);
		i++;
	}
	return (0);
}

static char	*create_trim(const char *s1, int s, int e)
{
	char	*str;
	int		len;
	int		i;

	len = e - s;
	i = 0;
	if (len <= 0 || s >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[s + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (isin(set, s1[i]))
	{
		i++;
	}
	while (j >= i && isin(set, s1[j]))
	{
		j--;
	}
	return (create_trim(s1, i, j + 1));
}
