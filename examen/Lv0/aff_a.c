/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:40:53 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 15:44:34 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	if (argc != 2)
		write (1, "a\n", 2);

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write (1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write (1, "\n", 1);
	}
}
