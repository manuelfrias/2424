#include <unistd.h>
void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	return (0);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int k;
    int a;
    int b;
    int c;
    i=0;
    while (i < 10)
    { 
        j = 0;
        if (i !=0)
            {
                j = i -1;
            }
            else
            {
                j= 0;
            }
        while (j < 10)
        {
            if (j !=0)
            {
                k = j -1;
            }
            else
            {
                k = 0;
            }
            while (k < 10)
            {
                if (((i != j) && (i != k)) && (j != k))
                {
                    a = i+48;
                    b = j+48;
                    c = k+48;
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, &c, 1);
                    write(1, &", ", 2);                   
                }   
                 k++;
            }
            j++;
        }
        i++;
    }


}