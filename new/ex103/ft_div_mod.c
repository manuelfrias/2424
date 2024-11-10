#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);


void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
int a;
int b;
ft_div_mod(10, 3, &a, &b);
printf("a / b = %d\n", a);
printf("a mod b = %d\n", b);
return (0); 
}
