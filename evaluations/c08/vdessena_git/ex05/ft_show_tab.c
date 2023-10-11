/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:40:13 by vdessena          #+#    #+#             */
/*   Updated: 2023/10/10 14:17:38 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr_aux(int n, char c)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n <= 9)
	{
		c = (n % 10) + 48;
		write(1, &c, 1);
	}
	else
	{
		c = (n % 10) + 48;
		ft_putnbr_aux(n / 10, c);
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		j;

	i = -1;
	while (par[++i].str != 0)
	{
		j = -1;
		while ((par[i].str)[++j] != '\0')
			write(1, &((par[i].str)[j]), 1);
		write(1, "\n", 1);
		ft_putnbr_aux((par[i].size), 'd');
		write(1, "\n", 1);
		j = -1;
		while ((par[i].copy)[++j] != '\0')
			write(1, &((par[i].copy)[j]), 1);
		write(1, "\n", 1);
	}
}
