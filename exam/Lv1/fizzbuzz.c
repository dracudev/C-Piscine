/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:15:22 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 09:45:26 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	unsigned int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz\n", 9);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz\n", 5);
		}
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
}
