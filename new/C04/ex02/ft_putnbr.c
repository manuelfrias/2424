/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:04:55 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 15:04:56 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}

// int main(void)
// {
//     ft_putnbr(123456789);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483647);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483646);
//     return 0;
// }
