/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:47:56 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 19:15:39 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	lowercase;
	int	mista;
	int	vuota;

	char	l[] = "lowercase";
	char	m[] = "abc123ABC";
	char	v[] = "";
	lowercase = ft_str_is_lowercase(l);
	mista = ft_str_is_lowercase(m);
	vuota = ft_str_is_lowercase(v);
	printf("lowercase: %d\n", lowercase);
	printf("mista:     %d\n", mista);
	printf("vuota:     %d\n", vuota);
}
