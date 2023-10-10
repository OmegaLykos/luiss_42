/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:55:34 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 19:17:02 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	uppercase;
	int	mista;
	int	vuota;

	char	u[] = "UPPERCASE";
	char	m[] = "abc123ABC";
	char	v[] = "";
	uppercase = ft_str_is_uppercase(u);
	mista = ft_str_is_uppercase(m);
	vuota = ft_str_is_uppercase(v);
	printf("uppercase: %d\n", uppercase);
	printf("mista:     %d\n", mista);
	printf("vuota:     %d\n", vuota);
}
