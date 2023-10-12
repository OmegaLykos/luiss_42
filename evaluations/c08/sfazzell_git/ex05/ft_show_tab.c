/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:01:25 by sfazzell          #+#    #+#             */
/*   Updated: 2023/10/12 16:56:47 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int n, char c)
{
	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		c = n % 10 + 48;
		ft_putnbr(n / 10, 'a');
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size, 'a');
		ft_putstr(par[i].copy);
		i++;
	}
}
