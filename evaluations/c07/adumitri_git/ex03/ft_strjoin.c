/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:22:41 by adumitri          #+#    #+#             */
/*   Updated: 2023/10/12 20:39:36 by adumitri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	dsize;
	int	ssize;
	int	i;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	i = -1;
	while (++i < ssize)
		dest[dsize + i] = src[i];
	dest[dsize + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_size;
	int		size_of_sep;
	int		i;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	size_of_sep = ft_strlen(sep);
	total_size = 0;
	i = 0;
	while (i < size)
		total_size += ft_strlen(*(strs + i++));
	total_size += (size - 1) * size_of_sep;
	str = (char *) malloc(sizeof(char) * total_size);
	*str = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, *(strs + i));
		if (i++ == size - 1)
			break ;
		ft_strcat(str, sep);
	}
	return (str);
}
