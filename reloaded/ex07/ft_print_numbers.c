/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:56:03 by antandre          #+#    #+#             */
/*   Updated: 2024/06/06 13:56:07 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
