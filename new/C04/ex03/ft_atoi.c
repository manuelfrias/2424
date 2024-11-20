#include <stdio.h>
int helper(char *str)
{
	int result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int ft_atoi(char *str)
{
	int sign;

	sign = 1;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			sign = -1 * sign;
			str++;
		}
		else if (*str >= '0' && *str <= '9')
			return helper(str) * sign;
		else
			str++;
	}
}

int main(void)
{
	char str[] = "123456789";
	printf("%d\n", ft_atoi(str));
	char str2[] = "12789";
	printf("%d\n", ft_atoi(str2));
	char str3[] = "1234gff9";
	printf("%d\n", ft_atoi(str3));
	char str4[] = " +++---++123456789";
	printf("%d\n", ft_atoi(str4));
	char str5[] = " +++---++123456++789";
	printf("%d\n", ft_atoi(str5));
	char str6[] = " +++---++1234---56789";
	printf("%d\n", ft_atoi(str6));
	return 0;
}