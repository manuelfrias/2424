#include <stdio.h>

int main(void)
{
    int age = 22;

    printf("Age: %d\n", age);

    printf("Age: %p\n", &age);

    int *ptr;

    ptr = &age;

    printf("Age: %p\n", ptr);
    printf("Age: %d\n", *ptr);

    return (0);
}