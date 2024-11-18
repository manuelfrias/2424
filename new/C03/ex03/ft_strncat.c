// #include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return dest;
}

// int main(void)
// {
// 	char strdest[100] = "Que acabe la piscina ";
// 	char strsrc[] = "ahora!";
// 	unsigned int n = 3;

// 	printf("Antes: %s\n", strdest);
// 	ft_strncat(strdest, strsrc, n);
// 	printf("Despues: %s\n", strdest);

// 	return 0;
// }