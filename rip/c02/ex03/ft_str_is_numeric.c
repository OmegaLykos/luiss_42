/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:09:55 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 19:13:57 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	numeri;
	int	mista;
	int	vuota;

	char	n[] = "0123456789";
	char	m[] = "0123456789abcABC";
	char	v[] = "";
	numeri = ft_str_is_numeric(n);
	mista = ft_str_is_numeric(m);
	vuota = ft_str_is_numeric(v);
	printf("numeri: %d\n", numeri);
	printf("mista:  %d\n", mista);
	printf("vuota:  %d\n", vuota);
}
