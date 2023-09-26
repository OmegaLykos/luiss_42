#include <stdio.h>

int fct(void);

int main (void)
{
	int i;

	i = 0;
	printf("%d\n", i);

	i = fct();
	printf("%d\n", i);
	return(0);

}

int fct(void)
{
	printf("Coucou 42\n");
	return(42);
}
