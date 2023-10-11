/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:23:16 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/11 11:09:16 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "minuscolo";
	char	b[] = "mIsTo";
	char	c[] = "MAIUSCOLO";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	return (0);
}
