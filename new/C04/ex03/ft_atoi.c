#include <stdio.h>
int ft_atoi(char *str)
{
	int sign;
	int start_counting;
	int result;

	sign = 1;
	start_counting = -1;
	result = 0;
	while (*str != '\0')
	{
		if (start_counting == -1)
		{
			if (*str == '-')
				sign = -1 * sign;
			else if (*str >= '0' && *str <= '9')
			{
				start_counting = 1;
				result = *str - '0';
			}
		}
		else
		{
			if (*str >= '0' && *str <= '9')
				result = result * 10 + (*str - '0');
			else
				return result * sign;
		}
		str++;
	}
	return result * sign;
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