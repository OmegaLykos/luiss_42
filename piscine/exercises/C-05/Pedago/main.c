/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:57:37 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/04 11:38:26 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// FUNZIONE ITERATIVA !

/*int mul(int a, int b)
{
	int ret;

	ret = 0;
	while (b != 0)
	{
		if (b < 0)
		{
			ret -= a;
			b++;
		}
		else
		{
			ret += a;
			b--;
		}
	}
	return (ret);
}

int main(void)
{
	printf("%d\n", mul(4, -10));
	return(0);
}*/

// FUNZIONE RICORSIVA !

int mul(int a, int b)
{
	if (b == 0)
		return 0;
	if (b < 0)
		return -a + mul(a, b + 1);
	return a + mul(a, b - 1);
}

int main(void)
{
	printf("%d\n", mul(4, -10));
	return (0);
}
