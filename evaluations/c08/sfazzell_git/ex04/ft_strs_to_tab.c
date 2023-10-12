/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfazzell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:13:15 by sfazzell          #+#    #+#             */
/*   Updated: 2023/10/12 16:56:26 by sfazzell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*cpy(char *str)
{
	int		i;
	char	*res;

	res = (char *) malloc(len(str) * sizeof(char));
	i = 0;
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*res;

	if (ac <= 0)
		return (NULL);
	res = (struct s_stock_str *) malloc((ac + 1) * sizeof(struct s_stock_str));
	i = 0;
	if (res == NULL)
		return (NULL);
	if (av == NULL)
		return (NULL);
	while (i < ac)
	{
		res[i].size = len(av[i]);
		res[i].str = cpy(av[i]);
		res[i].copy = cpy(av[i]);
		i++;
	}
	res[i].str = NULL;
	return (res);
}
