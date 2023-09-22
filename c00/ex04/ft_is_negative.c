/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:57:05 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/09/22 11:13:44 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1,&c,1);
}

void ft_is_negative(int n)
{
		if(n < 0)
		{
				ft_putchar('N');
		}
		else if(n >= 0)
		{
				ft_putchar('P');
		}
}

/*
int main(void)
{
		ft_is_negative(5);
		return 0;
}
*/
