#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp = *a; // Guardamos momentareamente el valor de a en temp
    *a = *b;       // Cambiamos el valor de a a b
    *b = temp;     // Guardamos el valor de temp en b
}

int main()
{
    int x = 5;
    int y = 10;

    printf("Antes de cambiair: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Despues: x = %d, y = %d\n", x, y);

    return 0;
}