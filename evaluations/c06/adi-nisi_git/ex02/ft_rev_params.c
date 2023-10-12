/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-nisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:10:14 by adi-nisi          #+#    #+#             */
/*   Updated: 2023/10/12 18:12:00 by adi-nisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	i = argc -1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		--i;
	}
	return (0);
}
