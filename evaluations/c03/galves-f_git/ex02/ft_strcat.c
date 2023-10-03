/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:25:25 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/30 20:06:54 by galves-f         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	(void) src;
	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
		dest[size++] = src[i++];
	dest[size] = '\0';
	return (dest);
}
