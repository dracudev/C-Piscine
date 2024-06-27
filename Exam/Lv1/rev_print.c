/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:30:20 by antandre          #+#    #+#             */
/*   Updated: 2024/04/05 09:56:25 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lenght(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	unsigned int	i;
	int				lenght;
	char			aux;

	if (argc == 2)
	{
		lenght = ft_lenght(argv[1]);
		i = 0;
		while (i < lenght / 2)
		{
			aux = argv[1][i];
			argv[1][i] = argv[1][lenght - i - 1];
			argv[1][lenght - i - 1] = aux;
			i++;
		}
		write (1, argv[1], lenght);
	}
	write (1, "\n", 1);
}
