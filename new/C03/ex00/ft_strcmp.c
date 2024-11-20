/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:42 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 14:36:44 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strcmp("AAB", "AAB"));
	printf("%d\n", ft_strcmp("ABB", "ABC"));
	printf("%d\n", ft_strcmp("ABC", "ABB"));
	printf("%d\n", ft_strcmp("ADD", "F"));
	return (0);
}
