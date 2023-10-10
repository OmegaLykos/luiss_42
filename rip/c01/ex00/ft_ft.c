/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:06:00 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/10 10:56:42 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
/*la ft accetta un pointer ad un int come arg*/
{
	*nbr = 42;
}
/*val dell'int a cui il pointer nbr fa riferimento*/

int	main(void)
{
	int	a;
	int	*ptr;

	ptr = &a;
	ft_ft(ptr);
	printf("%d", a);
}
/*definisco una var*/
/*definisco un pointer ad un int*/

/*associo il pointer alla var*/
/*richiamo il pointer nella ft*/
/*richiamo la var per stamparne l'int*/
