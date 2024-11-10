#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42; 
}

int main(void)
{
    int number; 
    int *ptr1 = &number;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    ft_ultimate_ft(&ptr8); 

    // Print the value of number to verify it's set to 42
    printf("Value of number after calling ft_ultimate_ft: %d\n", number);

    return (0);
}