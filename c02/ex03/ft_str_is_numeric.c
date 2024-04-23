/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:13:34 by antandre          #+#    #+#             */
/*   Updated: 2024/03/26 10:25:43 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_is_numeric(char c)
{
	if ((c <= '9') && (c >= '0'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(char_is_numeric(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
