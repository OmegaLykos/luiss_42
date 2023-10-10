/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:58:37 by clussian          #+#    #+#             */
/*   Updated: 2023/10/09 19:53:16 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
	{
		i = 1;
		while (i * i <= nb && i <= 46340)
		{
			if (i * i == nb)
				return (i);
			else
				i++;
		}
		return (0);
	}
}

/*int main (int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
