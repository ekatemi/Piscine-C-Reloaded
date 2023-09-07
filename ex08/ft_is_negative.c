#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_is_negative(int n)
{
	char c;
	if (n < 0)
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	ft_putchar(c);
}

int	main(void)
{
	char c = 0;
	ft_is_negative(c);
	return (0);
}
