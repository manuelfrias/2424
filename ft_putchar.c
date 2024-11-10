#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar(*"c");
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
