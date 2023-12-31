/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:13:59 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/07 18:58:10 by frpelill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_H
# define MY_LIB_H

typedef unsigned long long int	t_ullint;

typedef struct s_list
{
	unsigned long long int		nb;
	char						*val;
}		t_list;

unsigned long long int		ft_atoi(const char *str);
int							ft_check_input(int argc, char **argv);
void						ft_print(t_ullint n, t_list *tab, int *first);
unsigned long long int		getdec(unsigned long long int nb);
unsigned long long int		getmult(unsigned long long int nb);
char						*ft_strdup(char *src);
void						ft_putstr(char *str);
char						*ft_getnumb(int fd);
char						*ft_getval(int fd, char *c);
int							ft_strlen(char *str);
t_list						*ft_read(const char *file);
int							max_num_len(char *str);

#endif
