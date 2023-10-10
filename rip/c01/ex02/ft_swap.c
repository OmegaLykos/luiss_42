/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:23:41 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 12:45:05 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}
/*definisco due var*/
/*definisco due pointer*/

/*definisco i val delle var*/
/*associo i pointer alle var*/
/*richiamo i pointer nella ft*/
/*richiamo le var per stamparne l'int*/
