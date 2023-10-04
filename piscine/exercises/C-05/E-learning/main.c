/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:33:07 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/10/04 10:53:02 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	f(int param1, int param2)
{
	char	local_var_1;
	char	local_var_2;

	/*local_var_2 = g(local_var_1);*/

	f(param1 + 1, param2 + 2);
}

char	g(char c)
{
	int	other_local_var;
	return (other_local_var + 1);
}

int	main(void)
{
	int	a;
	int	b;

	f(a, b);
}
