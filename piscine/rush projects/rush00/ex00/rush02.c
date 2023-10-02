/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:47:42 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/09/23 14:26:18 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char c);

void rush(int x, int y) {
    int i = 0;
    int j;

    while (i < y) {
        j = 0;
        while (j < x) {
            if ((i == 0 && j == 0) || (i == 0 && j == x - 1)) {
                ft_putchar('A');
            } else if ((i == y - 1 && j == 0) || (i == y - 1 && j == x - 1)) {
                ft_putchar('C');
            } else if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
                ft_putchar('B');
            } else {
                ft_putchar(' ');
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

