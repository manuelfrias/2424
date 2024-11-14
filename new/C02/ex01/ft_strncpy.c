/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:48:40 by manufria          #+#    #+#             */
/*   Updated: 2024/11/14 15:24:07 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				endofstr;
	unsigned int	i;

	endofstr = 0;
	i = 0;
	while (i <= n && src[i] != '\0')
	{
		if (src[i] == '\0' || endofstr == 1)
		{
			dest[i] = '\0';
			endofstr = 1;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[10];
// 	char	str2[10];

// 	printf("%s\n", ft_strncpy(str1, "Hello", 10));
// 	ft_strncpy(str2, "World", 10);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	return (0);
// }
