/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:31:04 by clussian          #+#    #+#             */
/*   Updated: 2023/10/08 13:40:38 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

/*int main (int argc, char **argv)
{
	if (argc == 3)
	{
		int iniziale = atoi(argv[1]);
		int potenza = atoi(argv[2]);
		printf ("%d\n", ft_recursive_power(iniziale, potenza));
	}
	return (0);
}*/
