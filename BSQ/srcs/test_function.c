/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:26:51 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/21 17:00:29 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "prototypes.h"

void	ft_print_data_file(t_data input)
{
	printf("Line : %d\n", input.line);
	printf("Col : %d\n", input.col);
	printf("Vide : %c\n", input.empty);
	printf("Obst : %c\n", input.obstacle);
	printf("Plein : %c\n", input.fill);
	printf("Err : %d\n", input.error);
	printf("Max : %d\n", input.max);
	write(1, "\n", 1);
}

void	ft_print_data_bsq(t_bsq input)
{
	printf("x : %d\n", input.x);
	printf("y : %d\n", input.y);
	printf("length : %d\n", input.length);
	printf("x_max : %d\n", input.x_max);
	printf("y_max : %d\n", input.y_max);
	printf("x_prev : %d\n", input.x_prev);
	printf("y_prev : %d\n", input.y_prev);
	printf("end : %d\n", input.end);
	write(1, "\n", 1);
}

void	ft_print_map_numbers(int *map, t_data input)
{
	unsigned int	i;
	unsigned int	max;
	char			c;

	max = input.line * input.col;
	i = 0;
	while (i < max)
	{
		c = map[i] + 48;
		write(1, &c, 1);
		i++;
		if (i % input.col == 0)
			write(1, "\n", 1);
	}
	write(1, "\n", 1);
}
