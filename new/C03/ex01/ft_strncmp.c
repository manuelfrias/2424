/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:59 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 14:37:02 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("AABC", "AABC", 2));
// 	printf("%d\n", ft_strncmp("AABC", "AABC", 2));
// 	printf("%d\n", ft_strncmp("ABC", "ACC", 2));
// 	printf("%d\n", ft_strncmp("ADD", "F", 2));
// 	return (0);
// }
