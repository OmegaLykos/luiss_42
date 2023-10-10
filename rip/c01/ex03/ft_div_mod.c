/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:48:59 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 13:08:04 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 5;
	b = 2;
	printf("a : %d, b : %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}
