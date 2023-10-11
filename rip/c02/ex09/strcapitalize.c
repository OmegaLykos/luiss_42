/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcapitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:34:27 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/11 11:11:44 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (capitalize == 1))
		{
			str[i] -= 32;
			capitalize = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (!capitalize))
		{
			str[i] += 32;
		}
		else if (capitalize == 1)
			capitalize = 0;
		if (!(str[i] >= '0' && str[i] <= '9'))
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				if (!(str[i] >= 'A' && str[i] <= 'Z'))
					capitalize = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "ciao come stai, tutto ok?";
	char	b[] = "sI, TuTTo bEnE, gRAzie";
	char	c[] = "CIAO CIAO CIAO";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
}
