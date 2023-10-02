#include <stdio.h>

int main()
{
	int a;

	a = 44;

	switch(a)
	{
		case 41:
			printf("Hello\n");
			break;
		case 42:
			printf("World\n");
			break;
		case 43:
			printf("This is\n");
			break;
		default:
			printf("Awesome\n");
			break;
	}

	/*if (a == 41)
		printf("Hello\n");
	else if (a == 42)
		printf("World\n");
	else if (a == 43)
		printf("This is\n");
	else
		printf("Awesome\n");*/
}
