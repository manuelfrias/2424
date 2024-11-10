#include <unistd.h>
void ft_putstr(char *str);

// Create a function that displays a string of characters on the standard output.
// Here’s how it should be prototyped:

void ft_putstr(char *str)
{   
    while (*str != '\0') {
        write(1, str, 1);
        str = str + 1;
    }
}

int main(void)
{
    char str[] = "Hola";
    ft_putstr(str);
    return (0);
}