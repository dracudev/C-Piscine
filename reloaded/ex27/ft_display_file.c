/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:16:49 by antandre          #+#    #+#             */
/*   Updated: 2024/06/13 13:31:41 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int	main(int argc, char **argv)
{
	FILE	*file;
	unsigned char	*buffer[256];
	size_t	result;
	size_t	i;
	
	if (argc == 1)
	{
	fprintf(stderr, "File name missing.\n");
	return (1);
	}
	if (argc > 2)
	{
	fprintf(stderr, "Too many arguments.\n");
	return (1);
	}
	if (argc == 2)
	{
		file = fopen(argv[1], "rb");
		result = fread(buffer, sizeof(buffer), 1, file);
		i = 0;
		if (result != 1)
		{
			fprintf(stderr, "Cannot read file.\n");
			return (1);
		}
		while (fread(buffer, sizeof(buffer), 1, file))
		{
			printf("%s", buffer[i]);
			i++;
		}
		fclose(file);
		return (0);
	}
}
