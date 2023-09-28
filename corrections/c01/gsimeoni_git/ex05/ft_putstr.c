/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:27:51 by gsimeoni          #+#    #+#             */
/*   Updated: 2023/09/28 08:24:54 by gsimeoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		write(1, &str[indice], 1);
		indice++;
	}
}