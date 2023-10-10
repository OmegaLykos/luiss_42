/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:51:31 by kdong             #+#    #+#             */
/*   Updated: 2023/10/08 18:19:50 by kdong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);
{
	unsignes int i;

	i = 0;
	if (n ==0)
		return (0);
	while (s1[i] == s2[i] && (i < n -1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}