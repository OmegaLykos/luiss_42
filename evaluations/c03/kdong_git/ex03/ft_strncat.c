/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:45 by kdong             #+#    #+#             */
/*   Updated: 2023/10/08 18:56:28 by kdong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb);
{
	unsigned int i1;
	unsigned int i2;

	i1=0;
	i2=0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] + src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	retirn (dest);
}
