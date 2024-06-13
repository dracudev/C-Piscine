/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:16:49 by antandre          #+#    #+#             */
/*   Updated: 2024/06/13 16:56:22 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>


void	ft_putstr_fd(int fd, char*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(fd, str + i, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int fd;
	unsigned char	buffer[256];
	size_t	result;
	
	if (argc == 1)
	{
	ft_putstr_fd(2, "File name missing.\n");
	return (1);
	}
	if (argc > 2)
	{
	ft_putstr_fd(2, "Too many arguments.\n");
	return (1);
	}
	if (argc == 2)
	{
		fd = open(argv[1], 0_RDONLY);
		while ((result = read(fd, 256, buffer)) > 0)
		{
			if (result < 1)
			{	
				write(2, "Cannot read file.\n", );
				return (1);
			}
			ft_putstr_fd(fd, buffer);
		}
		close(fd);
		return (0);
	}
}
