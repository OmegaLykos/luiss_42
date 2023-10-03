/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:58:27 by dcarrett          #+#    #+#             */
/*   Updated: 2023/10/03 11:11:52 by dcarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z' ) && (capitalize == 1))
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
