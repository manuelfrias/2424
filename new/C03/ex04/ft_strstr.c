/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:08:26 by manufria          #+#    #+#             */
/*   Updated: 2024/11/19 18:13:36 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;
	char	*p1start;

	if (*to_find == '\0')
		return (str);
	p1 = str;
	while (*p1 != '\0')
	{
		p1start = p1;
		p2 = to_find;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (p1start);
		p1 = p1start + 1;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%s", ft_strstr("hello", "lxl"));
// 	printf("%s", ft_strstr("hello", "ll"));
// 	return (0);
// }
