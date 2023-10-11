/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:15:24 by dcarrett          #+#    #+#             */
/*   Updated: 2023/10/10 18:06:45 by dcarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_leng(char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		j;
	char	*copy;

	l = ft_leng(src);
	copy = (char *)malloc(l * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	j = 0;
	while (j < l)
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
