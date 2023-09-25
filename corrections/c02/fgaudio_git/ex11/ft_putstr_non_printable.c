/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:07:43 by fgaudio           #+#    #+#             */
/*   Updated: 2023/09/25 18:37:12 by fgaudio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(int dec, char *hex)
{
	int	div;
	int	mod;

	div = dec / 16;
	mod = dec % 16;
	if (div <= 9)
		hex[0] = div + 48;
	else
		hex[0] = div + 87;
	if (mod <= 9)
		hex[1] = mod + 48;
	else
		hex[1] = mod + 87;
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	s_hex[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			dec_to_hex(str[i], s_hex);
			write(1, "\\", 1);
			write(1, s_hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
