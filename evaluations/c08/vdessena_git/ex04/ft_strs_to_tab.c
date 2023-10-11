/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:18:24 by vdessena          #+#    #+#             */
/*   Updated: 2023/10/10 14:21:42 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s_cpy;
	int		i;

	s_cpy = (char *) malloc(sizeof(char) * len(src) + 1);
	if (s_cpy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s_cpy[i] = src[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*st;

	if (ac < 0 || av == NULL)
		return (NULL);
	st = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (st == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		st[i].size = len(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i]);
	}
	st[i].size = sizeof(NULL);
	st[i].str = 0;
	st[i].copy = 0;
	return (st);
}
