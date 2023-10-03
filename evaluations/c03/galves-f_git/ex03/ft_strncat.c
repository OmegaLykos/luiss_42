/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:25:25 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/03 10:25:13 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size++] = src[i++];
	}
	dest[size] = '\0';
	return (dest);
}
