#include <unistd.h> 

void ft_is_negative(int n)
    {

	if (n < 0)
	{
      write(1 , "N" , sizeof("N") );
	} 
    else
	{
		write(1 , "P", sizeof("P"));
	}


	}

/*int main(void)
    {
	    int n;
		n = -4;
		ft_is_negative(n);
		return(0);

	}
*/

