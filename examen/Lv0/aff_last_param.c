/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:36:49 by antandre          #+#    #+#             */
/*   Updated: 2024/04/04 15:36:53 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	i;

	if (argc < 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
	}
}
