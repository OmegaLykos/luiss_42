/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:10:59 by frpelill          #+#    #+#             */
/*   Updated: 2023/10/08 18:15:53 by frpelill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "my_lib.h"
#include <unistd.h>
#include <fcntl.h>

int	count_non_empty_lines(const char *filename)
{
	int		fd;
	int		count;
	char	buffer[1];
	char	prev_char;

	prev_char = '\n';
	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	while (read(fd, buffer, 1) > 0)
	{
		if (buffer[0] == '\n')
		{
			if (prev_char != '\n')
				count++;
		}
		prev_char = buffer[0];
	}
	close (fd);
	return (count);
}

int	check_dict(int fd, t_list	*tab, const char *filename)
{
	if (fd == -1 || !tab || count_non_empty_lines(filename) == 0)
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	return (0);
}

void	idk(int fd, t_list *tab, const char *filename)
{
	int		i;
	char	c[1];
	char	*tmp;

	i = -1;
	while (++i < count_non_empty_lines(filename))
	{
		tab[i].nb = ft_atoi(ft_getnumb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
	}
}

t_list	*ft_read(const char *filename)
{
	int		fd;
	t_list	*tab;

	tab = malloc(sizeof(t_list) * count_non_empty_lines(filename));
	fd = open(filename, O_RDONLY);
	check_dict(fd, tab, filename);
	idk(fd, tab, filename);
	close(fd);
	return (tab);
}
