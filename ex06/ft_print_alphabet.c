#include <unistd.h>

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		write(1, &c, 1),
	}
	return (0);
}
