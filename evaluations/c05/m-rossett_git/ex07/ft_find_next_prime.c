/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:57:39 by mrossett          #+#    #+#             */
/*   Updated: 2023/10/10 09:44:33 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	primo;
	int	i;

	nb++;
	primo = 1;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			primo = 0;
			break ;
		}
		i++;
	}
	if (primo && nb != 1)
		return (nb);
	else
		nb = ft_find_next_prime(nb);
}
