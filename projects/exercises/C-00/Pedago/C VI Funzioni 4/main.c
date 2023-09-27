#include <stdio.h>

float fct(int, float);

int main(void)
{
	float i;

	i = fct(42, 0.5);
	printf("%f\n", i);
	return(0);
}

float fct(int a, float x)
{
	printf("Coucou 42\n");
	return (a * x);
}
