/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:28:48 by mrossett          #+#    #+#             */
/*   Updated: 2023/10/10 09:50:14 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	sq;
	long	lnb;

	lnb = nb;
	i = lnb / 2;
	sq = i * i;
	if (lnb <= 0)
		return (0);
	if (lnb == 1)
		return (1);
	while (sq >= lnb)
	{
		sq = i * i;
		if (sq == lnb)
			return (i);
		i--;
	}
	return (0);
}
