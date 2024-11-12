/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:54:35 by manufria          #+#    #+#             */
/*   Updated: 2024/11/12 16:54:36 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[10];
// 	char	str2[10];

// 	ft_strcpy(str1, "Holaaaa");
// 	ft_strcpy(str2, str1);
// 	printf("%s\n", str2);
// 	return (0);
// }
