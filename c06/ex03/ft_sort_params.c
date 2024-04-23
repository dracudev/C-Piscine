/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:12:13 by antandre          #+#    #+#             */
/*   Updated: 2024/04/09 17:38:42 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] & s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

void	ft_swap(char *a, char *b)
{
	char *aux;

	*aux = *a;
	*a = *b;
	*b = *aux;
}

void	print_args(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;

	if (argc > 1) 
	{
		i = 1;
		while (argv[i])
		{
			j = i;
			while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
			{
				ft_swap(argv[j], argv[j -1]);
				j--;
			}
			i++;
		}
	print_args(argc, argv);	
	}
}





