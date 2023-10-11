/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:08:48 by dcarrett          #+#    #+#             */
/*   Updated: 2023/10/10 19:01:42 by dcarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*asd;
	int	l;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	l = max - min;
	asd = (int *)malloc(l * sizeof(int) + 1);
	i = 0;
	while (min < max)
	{
		asd[i] = min;
		min++;
		i++;
	}
	return (asd);
}
