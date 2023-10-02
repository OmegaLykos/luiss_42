#include <stdio.h>

/*int main(void)
{
	int 	a;
	int		b;
	char	c;
	int 	*ptr;

	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr = &c;
	printf("%p\n", ptr);
	return (0);
}*/

int main(void)
{
	int 	a;
	int		b;
	char	c;
	int 	*ptr;
	int 	*ptr2;
	int 	**ptr3;

	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr2 = ptr;
	ptr3 =&ptr;
	printf("%p\n", ptr3);
	return (0);
}
