/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astarran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:24:29 by astarran          #+#    #+#             */
/*   Updated: 2023/09/26 18:29:44 by astarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned long long n)
{
	char	hex[17];
	int		i;
	int		temp;

	i = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			hex[i++] = temp + 48;
		else
			hex[i++] = temp + 55 + 32;
		n /= 16;
	}
	hex[i] = '\0';
	write(1, hex, i);
}

void	print_addr(void *addr)
{
	unsigned long long	address;
	int					i;
	char				hex_address[16];

	address = (unsigned long long) addr;
	print_hex(address);
}

int	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	print_str_printable(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i] != '\0' && i < 16)
	{
		if (is_printable(s[i]))
			c = s[i];
		else
			c = '.';
		write(1, &c, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*add;

	add = (char *) addr;
	print_addr(addr);
	write(1, ":", 1);
	i = 0;
	while (i < size && i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		print_hex((unsigned long long) add[i]);
		i++;
	}
	write(1, " ", 1);
	print_str_printable(add);
	return (addr);
}
