/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jioncoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:24:17 by jioncoli          #+#    #+#             */
/*   Updated: 2023/10/09 12:14:38 by jioncoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;
	int	len;

	box = 0;
	len = size -1;
	i = 0;
	while (i < size / 2)
	{
		box = tab[i];
		tab[i] = tab[len];
		tab[len] = box;
		i++;
		len--;
	}
}
