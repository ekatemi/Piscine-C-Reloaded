#include <unistd.h>

int main()
{
	char	c = '0';
	        
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	return 0;
}
