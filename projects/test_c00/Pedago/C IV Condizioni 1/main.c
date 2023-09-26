#include <stdio.h>

/*int main (void)
{
	int a;

	a = 42;

	if (a == 43)
	{
		printf("Hello\n");
	}
	else if (a == 42)
	{
		printf("World\n");
	}
	else if (a != 40)
	{
		printf("!\n");
	}
	else
		printf("Coucou\n")
}*/

int main (void)
{
	int a;

	a = 42;

	if (a > 40)
	{
		if (a == 42)
			printf("toto\n");
		else
			printf("tata\n");
	}	
	else
		printf("Coucou\n");
}
