#include <stdio.h>

int main (void)
{
	int a;
	int b;

	a = 41;

	// NO! a == 42 ? b = 12 : b = 13;

	b = a == 42 ? 12 : 13;

	/*if (a ==42)
		b = 12;
	else
		b = 13;*/

	printf("%d\n", b);
}

/*int main(void)
{
	int a;

	a = 41;

	printf("%d\n", a == 42 ? 12 : 13);
}*/

/*int main (void)
{
	int a;
	int b;
	
	a = 41;

	b = a == 42 ? a > 40 ? 11 : 12 : 13;
	printf("%d\n", b);
}
