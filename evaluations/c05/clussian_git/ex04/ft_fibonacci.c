/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:44:15 by clussian          #+#    #+#             */
/*   Updated: 2023/10/09 17:57:20 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

/*int main (int argc, char **argv)
{
	if (argc == 2)
	printf ("%d\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}*/
