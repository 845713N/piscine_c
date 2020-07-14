/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huthiess <huthiess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:20:08 by huthiess          #+#    #+#             */
/*   Updated: 2020/07/12 22:22:26 by huthiess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "rush.h"

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	ft_pustr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	print_map(char *tab)
{
	int i;

	i = 0;
	while (i < WIDTH * WIDTH)
	{
		write(1, &tab[i], 1);
		if ((i + 1) % WIDTH == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}
