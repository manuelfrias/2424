/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:05:12 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 15:05:14 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	helper(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	letter;

	sign = 1;
	letter = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			letter = 1;
			str++;
		}
		if (*str == '-')
		{
			sign = -1 * sign;
			str++;
		}
		else if ((*str >= '0' && *str <= '9') && (letter == 0))
			return (helper(str) * sign);
		else
			str++;
	}
	return (0);
}
/*
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
*/