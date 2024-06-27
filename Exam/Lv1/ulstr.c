/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:42:30 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 18:53:43 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i]  >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 32;
		else if (argv[1][i]  >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = argv[1][i] + 32;
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
}



