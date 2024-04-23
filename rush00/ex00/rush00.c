/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:01:21 by rsierra-          #+#    #+#             */
/*   Updated: 2024/03/24 20:15:48 by jfermin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 || column == y) && (row == 1 || row == x))
				ft_putchar('o');
			else if (column == 1 || column == y)
				ft_putchar('-');
			else if (row == 1 || row == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		column++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR - PARAMETROS NO PERMITIDOS", 31);
	}
	if (x >= 362)
	{
		x = 362;
	}
	if (y >= 82)
	{
		y = 82;
	}
	print(x, y);
}
