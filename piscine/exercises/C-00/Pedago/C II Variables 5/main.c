#include <stdio.h>

/*int main()
{
	int a[10][10];

	a[0][3] = 12;
	a[1][0] = 1234;
	a[9][7] = 15;
	a[3][6] = a[0][3];
	printf("%d\n", a[3][6]);
}*/

int main()
{
	int a[10][10];
	int b;

	b = 3;
	a[9][7] = 3;
	a[0][a[9][7]] = 12;
	a[1][0] = 1234;
	a[3][6] = a[0][b];
	printf("%d\n", a [3][6]);
}
