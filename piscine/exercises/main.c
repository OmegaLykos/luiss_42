#include <stdio.h>

int main()
{
	  int x[] = {10, 20, 30};
	  int* p = &x[1]; // pointer into middle
	  char* fruit[3] = {"apples",
	                    "bananas",
	                    "cherries"};
	
	  printf("I have %d %s\n", *p, fruit[1]);
	  return 0;
}
