#include <stdio.h>

void ft_ft(int *nbr)
{
	// printf("Address stored in nbr (pointer): %p\n", (void *)nbr);
	*nbr = 42;
}   

int main(void)
{
	int number;
	ft_ft(&number);
	return (0);
}

