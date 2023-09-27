#include <stdio.h>

void	fct2(void)
{
	static	int	a = 0;

	a++;
	printf("%d\n", a);
}

void	fct(void)
{
	fct2();
}
