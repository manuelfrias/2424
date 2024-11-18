// #include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
	char *ptr;
	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return dest;
}

// int main(void)
// {
// 	char strdes[100] = "Que termine la piscina ";
// 	char strscr[] = "ya!";
// 	printf("Antes: %s\n", strdes);
// 	ft_strcat(strdes, strscr);
// 	printf("Despues: %s\n", strdes);
// 	return 0;
// }