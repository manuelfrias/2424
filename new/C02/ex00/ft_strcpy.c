char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char str1[10];
	char str2[10];
	ft_strcpy(str1, "Holaaaa");
	ft_strcpy(str2, str1);
	return (0);
}