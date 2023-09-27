#include <stdio.h>

/*int main()
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("%d %d\n", i, j);
			break;		//BREAK
			j++;
		}
		i++;
	}
	printf("I am out\n");
}*/

/*int main()
{
	int i;

	i = 0;
	while (i < 10)		//WHILE
	{
		printf("%d\n", i);
		continue;
		i++;
	}
	printf("I am out\n");
}*/

int main()
{
	int i;

	for (i = 0; i < 10; i++)	//FOR
	{
		printf("%d\n", i);
		continue;
		printf("NEVER EVER\n");
	}
	printf("I am out\n");
}


