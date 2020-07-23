/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:04:06 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/23 12:28:27 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_display_input(char *str)
{
	int		fd;
	char	c;

	fd = open(str, 0);
	if (fd != -1)
	{
		while (read(fd, &c, 1) != 0)
			write(1, &c, 1);
	}
	else
		write(2, "map error\n", 10);
	close(fd);
}

void	ft_display_output(int *map, t_data input)
{
	unsigned int i;
	unsigned int max;
	unsigned int line_length;

	max = input.col * input.line;
	line_length = input.col;
	i = 0;
	while (i < max)
	{
		if (map[i] == 0)
			write(1, &input.empty, 1);
		else if (map[i] == 1)
			write(1, &input.obstacle, 1);
		else if (map[i] == 2)
			write(1, &input.fill, 1);
		i++;
		if (i % line_length == 0)
			write(1, "\n", 1);
	}
}
