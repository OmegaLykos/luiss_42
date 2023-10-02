#include <stdio.h>

/*int main(void)
{
	int		a;
	int		*ptr;

	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", ptr + 1);
	return (0);
}*/

/*int main(void)
{
	int		b;
	int		a;
	int		*ptr;

	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr + 1);
	return (0);
}*/

/*int main(void)
{
	int		b;
	int		a;
	int		*ptr;

	b = 23;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr + 1);
	printf("%d\n", *(ptr + 1));
	*(ptr + 1) = 78;
	printf("%d\n", b);
	return (0);
}*/

int main(void)
{
	int		b;
	int		a;
	int		*ptr;

	b = 23;
	a = 12;
	ptr = &b;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr - 1);
	printf("%d\n", *(ptr - 1));
	*(ptr - 1) = 78;
	printf("%d\n", a);
	return (0);
}

