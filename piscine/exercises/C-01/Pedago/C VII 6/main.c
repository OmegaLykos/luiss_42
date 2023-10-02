#include <stdio.h>

/*int main(void)
{
	char	c;

//	c = '0';
//	c = 0;
    c = '\0';

	printf("%d\n", c);
	return (0);
}*/

/*int main(void)
{
	char	*str;

	str = "lol";

	str[0] = 'p';
	printf("%c %s\n", *str, str);
	return (0);
}*/

int main(void)
{
	char	str[] = "lol";

	str[0] = 'p';
	printf("%c %s\n", *str, str);
	return (0);
}
