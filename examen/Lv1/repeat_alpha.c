/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:47:59 by antandre          #+#    #+#             */
/*   Updated: 2024/04/05 09:28:10 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_index(char c)
{
	int	index;

	if (c >= 'A' && c <= 'Z')
		index = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		index = c - 'a' + 1;
	else
		index = 1;
	return (index);
}


int	main(int argc, char **argv)
{
	unsigned int	i;
	int				index;

	if (argc != 2)
		write (1, "\n", 1);
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			index = ft_index(argv[1][i]);
			while (index > 0)
			{
				write(1, &argv[1][i], 1);
				index--;
			}
			i++;
		}
	}
}

