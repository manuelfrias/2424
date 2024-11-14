/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:42:30 by manufria          #+#    #+#             */
/*   Updated: 2024/11/14 12:42:41 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// int main(void){
// 	char str1[100];
// 	char str2[100];
// 	char str3[100];
// 	int i;

// 	i = ft_strlcpy(str1, "Hela", 2);
// 	printf("%i\n", i);
// 	printf("%s\n", str1);
// 	i = ft_strlcpy(str2, "Hello World", 100);
// 	printf("%s\n", str2);
// 	i = ft_strlcpy(str3, "Hellsadsado Wodsddsadrld", 100);
// 	printf("%s\n", str3);
// 	return 0;
// }
