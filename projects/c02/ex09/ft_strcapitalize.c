/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:42:33 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/02 10:42:50 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	i;
	int	cond1;
	int	cond2;

	first_letter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		cond1 = str[i] >= 97 && str[i] <= 122;
		cond2 = str[i] >= 65 && str[i] <= 90;
		if ((str[i] >= 48 && str[i] <= 57) || cond1 || cond2)
		{
			if (first_letter && str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			else if (!first_letter && str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			first_letter = 0;
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
