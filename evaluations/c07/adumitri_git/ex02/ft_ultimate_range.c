/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:08:58 by adumitri          #+#    #+#             */
/*   Updated: 2023/10/12 20:38:52 by adumitri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	old_min;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((sizeof(int)) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	old_min = min;
	while (min <= max)
		*(*range + i++) = min++;
	return (max - old_min);
}
