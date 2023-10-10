/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:32:24 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 19:11:17 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	lettere;
	int	mista;
	int	vuota;

	char	l[] = "abcABC";
	char	m[] = "abc123ABC";
	char	v[] = "";	
	lettere = ft_str_is_alpha(l);
	mista = ft_str_is_alpha(m);
	vuota = ft_str_is_alpha(v);
	printf("lettere: %d\n", lettere);
	printf("mista:   %d\n", mista);
	printf("vuota:   %d\n", vuota);
}
