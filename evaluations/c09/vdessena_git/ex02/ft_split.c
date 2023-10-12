/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:42:20 by vdessena          #+#    #+#             */
/*   Updated: 2023/10/12 20:30:31 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str, char *sep, int i)
{
	int	len;
	int	j;

	len = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
				return (len);
			j++;
		}
		i++;
		len++;
	}
	return (len);
}

int	search_sep(char *str, char *sep, int i)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		if (str[i] == sep[j])
			return (1);
		j++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	counter;

	if (str[0] == '\0' || str == NULL || sep == NULL)
		return (0);
	if (str[1] == '\0' && !search_sep(str, sep, 0))
		return (1);
	i = 0;
	counter = 0;
	while (str[i] != '\0' && search_sep(str, sep, i))
		i++;
	while (str[i + 1] != '\0')
	{
		if (search_sep(str, sep, i) && !search_sep(str, sep, i + 1))
			counter++;
		i++;
	}
	return (counter + 1);
}

void	assign(char *s, char *str, int len, int *i)
{
	int	k;

	k = 0;
	while (k < len)
		s[k++] = str[(*i)++];
	s[k] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**strs;
	int		len;

	strs = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	j = 0;
	if (str != NULL && charset != NULL)
	{
		while (str[i] != '\0')
		{
			while (search_sep(str, charset, i))
				i++;
			if (str[i] == '\0')
				break ;
			len = ft_len(str, charset, i);
			strs[j] = (char *) malloc(sizeof(char) * (len + 1));
			assign(strs[j++], str, ft_len(str, charset, i), &i);
		}
	}
	strs[j] = NULL;
	return (strs);
}
