/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:20:09 by antandre          #+#    #+#             */
/*   Updated: 2024/06/11 15:42:50 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	unsigned int	i;

	i = 1;
	while (i <= length)
	{
		(*f)(tab[i]);
		i++;
	}
}	

#include <stdlib.h>
void	ft_putnbr(int nb);

int	main(void)
{
	int	*tab;

	tab = (int *)malloc(50*sizeof(int));
	ft_foreach(tab, 50, &ft_putnbr);
	free(tab);
}
