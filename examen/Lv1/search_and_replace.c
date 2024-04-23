/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:56:39 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 18:41:17 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
		write (1, "\n", 1);
	if (argc == 4)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
}
