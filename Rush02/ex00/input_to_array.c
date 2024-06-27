/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:17:00 by antandre          #+#    #+#             */
/*   Updated: 2024/04/07 18:07:34 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

char **input_to_array(char *input)
{
    int length;
    int numArrays;
	char **arrays;
	int i;
	int j;
	int k;
	
	length = ft_strlen(input);
	numArrays = length / 3 + (length % 3 != 0);
	arrays = malloc(numArrays * sizeof(char*));
    i = 0;
	while (i < numArrays)
	{
		arrays[i] = malloc(4 * sizeof(char));
		i++;
	}
	i = 0;
	k = 0;
    while (i < numArrays) 
	{
        j = 0;
        while (j < 3 && input[k] != '\0') {
            arrays[i][j] = input[k];
            j++;
            k++;
        }
        while (j < 3) {
            arrays[i][j] = '\0'; 
			j++;
        }
        arrays[i][3] = '\0'; 
		i++;
    }
	return (arrays);
}
