/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:27:23 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 20:13:17 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
