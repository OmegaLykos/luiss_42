#include <stdio.h>

int main(void)
{
	int tab[3];
	int *ptr;

	ptr = tab;
	printf("%p\n", tab);
	return (0);
}

/*int main(void)
{
	int	a;
	int	tab[3];
	int *ptr;

	ptr = tab;
	tab = &a;
	printf("%p\n", tab);
	return (0);
}*/
