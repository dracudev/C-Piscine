/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uni.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:08:52 by antandre          #+#    #+#             */
/*   Updated: 2024/04/07 18:17:38 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char 	**input_to_array(char *input);

char uni(char *intoar)
{
	char *input[4];
	char unidades[2];
	int size;
	int i;

	intoar = *input_to_array(*input);
	size = 3;
	i = 0;
	while (i <= size)
	{
		if (i == 2)
		{
	      unidades[0] = intoar[i];
	      unidades[1] = '\0';
		}
	    i++;
	}
	write (1, unidades, 1);
  	return (*unidades);
}
