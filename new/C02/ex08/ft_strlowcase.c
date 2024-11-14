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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "HOLAAAAaaaa";
// 	printf("%s\n", ft_strlowcase(str));
// 	return (0);
// }