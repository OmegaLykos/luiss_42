#include <stdio.h>

int main()
{
	int i;

	i = 0;
bla:
	printf("%d\n", i);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
		goto bla;
	}
	printf("I am out\n");
}
