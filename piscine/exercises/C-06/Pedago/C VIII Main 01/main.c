#include <stdio.h>

int main(int argc, char **argv /*, char **environ*/)
{
	(void) argc;
	(void) argv;
	printf("nome degli argomenti: %d\n", argc);
	printf("valore degli argomenti: %s\n", argv[0]);
	
	char *str = argv[1];
	printf("%s\n", str);
	return(0);
}
