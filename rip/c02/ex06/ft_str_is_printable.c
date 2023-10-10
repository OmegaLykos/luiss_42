/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:21:54 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 20:00:35 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	int	stampabile;
	int	mista;
	int	vuota;

	char	s[] = "stampabile";
	char	m[] = "\n";
	char	v[] = "";	
	stampabile = ft_str_is_printable(s);
	mista = ft_str_is_printable(m);
	vuota = ft_str_is_printable(v);
	printf("lettere: %d\n", stampabile);
	printf("mista:   %d\n", mista);
	printf("vuota:   %d\n", vuota);
}
