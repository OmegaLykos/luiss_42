/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astarran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:15:27 by astarran          #+#    #+#             */
/*   Updated: 2023/09/27 11:53:47 by astarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int	char_to_ascii(char c)
{
	return ((int) c);
}

void	print_hex(int n)
{
	char	hex[2];
	int		i;
	int		temp;

	i = 0;
	write(1, "\\", 1);
	if (n > 9)
		write(1, "0", 1);
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			hex[i++] = temp + 48;
		else
			hex[i++] = temp + 55 + 32;
		n /= 16;
	}
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;
	int	j;
	int	temp;

	j = 0;
	while (str[j] != '\0')
	{
		if (is_printable(str[j]))
			write(1, str + j, 1);
		else
		{
			n = char_to_ascii(str[j]);
			print_hex(n);
		}
		j++;
	}
}
