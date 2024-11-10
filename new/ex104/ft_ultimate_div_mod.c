//  This function divides parameters a by b. The result of this division is stored in the
// int pointed by a. The remainder of the division is stored in the int pointed by b.

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = *a / *b;
    *b = temp % *b;

}

int main(void)
{
    int a = 10;
    int b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("a / b = %d\n", a);
    printf("a mod b = %d\n", b);
    return (0);
}