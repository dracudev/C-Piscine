/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:57:39 by antandre          #+#    #+#             */
/*   Updated: 2024/04/05 10:33:22 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;
	char	*str;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] = argv[1][i] - 26;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
