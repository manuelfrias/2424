/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:45:38 by manufria          #+#    #+#             */
/*   Updated: 2024/11/12 16:45:44 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	char dest[i];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			dest[i] = str[i] - 32;
		}
		else
		{
			dest[i] = str[i];
		}
		i++;

	}
	return (dest);
}

int	main(void)
{
	printf("%s\n", ft_strupcase("hello"));
	printf("%s\n", ft_strupcase("He!!loworld"));
	printf("%s\n", ft_strupcase("HOLA""AAA"));
	printf("%s\n", ft_strupcase("Hello World !"));
	printf("%s\n", ft_strupcase(""));
	return (0);
}