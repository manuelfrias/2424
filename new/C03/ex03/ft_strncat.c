/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:37:34 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 14:37:36 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}

// int main(void)
// {
// 	char strdest[100] = "Que acabe la piscina ";
// 	char strsrc[] = "ahora!";
// 	unsigned int n = 3;

// 	printf("Antes: %s\n", strdest);
// 	ft_strncat(strdest, strsrc, n);
// 	printf("Despues: %s\n", strdest);

// 	return 0;
// }
