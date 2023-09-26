#include <stdio.h>

int main()
{
	int tab[10];
	int i;

	i = 0;
	while (i < 10)
	{
		tab[i] = i * i;
		/*printf("Coucou\n");*/
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d\n", tab [i]);
		i++;
	}
}
