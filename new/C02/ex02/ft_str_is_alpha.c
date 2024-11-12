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

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z' && str[i] >= 'A') || \
		(str[i] <= 'z' && str[i] >= 'a'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_str_is_alpha("Hello"));
//     printf("%d\n", ft_str_is_alpha("Hello World"));
//     printf("%d\n", ft_str_is_alpha("Hello World !"));
//     return (0);
// }
