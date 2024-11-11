#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while (i <= n || src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

int main(void)
{
	char str1[10];
	char str2[10];
	ft_strncpy(str1, "Holaaaa", 6);
	ft_strncpy(str2, str1, 2);
	printf("%s\n", str2);
	return (0);
}