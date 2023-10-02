#include <stdio.h>

/*int main(void)
{
	int tab[3];
	int *ptr;

	ptr = tab;
	printf("%p\n", tab);
	return (0);
}*/

/*int main(void)	//NO!
{
	int	a;
	int	tab[3];
	int *ptr;

	ptr = tab;
	tab = &a;
	printf("%p\n", tab);
	return (0);
}*/

/*int main(void)
{
	int	tab[3];
	int *ptr;

	tab[0] = 478;
	printf("%d\n", *tab);
	return (0);
}*/

/*int main(void)
{
	int	tab[3];
	int *ptr;

	tab[1] = 145;
	// tab[1] == *(tab + 1);
	// tab[n] == *(tab + n);
	printf("%d\n", *(tab + 1));
	return (0);
}*/

int main(void)
{
	int tab[3];
	int *tab2[2];

	tab[2] = 145;
	tab2[1] = tab;
//  tab2[1][2] = 18;
//  *(tab2[1] + 2) = 18;
//  *(*(tab2 + 1) + 2) = 18;
	printf("%d\n", *(tab + 2));
	return (0);
}
