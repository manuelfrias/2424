#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void ft_putstr2(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str = str + 1;
    }
}

int main(void)
{
    char str[] = "Hosla";
    ft_putstr(str);
    ft_putstr2(str);
    return (0);
}