/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astarran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:40:59 by astarran          #+#    #+#             */
/*   Updated: 2023/09/26 17:57:45 by astarran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_alphanumeric(char c)
{
	return (is_upper(c) || is_lower(c) || is_digit(c));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		last_was_alpha;
	char	c;

	i = 0;
	last_was_alpha = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (is_alphanumeric(c) && is_lower(c) && !last_was_alpha)
			str[i] -= 32;
		last_was_alpha = is_alphanumeric(c);
		i++;
	}
	return (str);
}
