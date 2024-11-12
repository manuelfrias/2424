/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:00:11 by manufria          #+#    #+#             */
/*   Updated: 2024/11/12 17:00:14 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 57 && str[i] >= 48)
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
//     printf("%d\n", ft_str_is_numeric("0575"));
//     printf("%d\n", ft_str_is_numeric("5665 55"));
//     printf("%d\n", ft_str_is_numeric("485s"));
//     return (0);
// }
