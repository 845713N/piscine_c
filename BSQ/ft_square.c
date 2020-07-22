/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 13:39:46 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 20:04:07 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

t_bsq	ft_initialise_square(t_data file)
{
	t_bsq bsq;

	bsq.x = 0;
	bsq.y = 0;
	bsq.length = 1;
	bsq.x_max = file.col - bsq.length;
	bsq.y_max = file.line - bsq.length;
	bsq.x_prev = 0;
	bsq.y_prev = 0;
	bsq.check_bigger = 0;
	bsq.end = 0;
	return (bsq);
}

int		*ft_square_placement(int *map, t_bsq bsq, t_data file)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = file.col * bsq.y_prev + bsq.x_prev;
	j = 0;
	k = 0;
	while (j < bsq.length)
	{
		map[i + j] = 2;
		if (j == bsq.length - 1 && k < bsq.length - 1)
		{
			i += file.col;
			j = 0;
			k++;
		}
		else
			j++;
	}
	return (map);
}

int		ft_check_square_position(int *map, t_bsq bsq, t_data file)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = file.col * bsq.y + bsq.x;
	j = 0;
	k = 0;
	while (j < bsq.length)
	{
		if (map[i + j] == 1
				|| (i + j) / file.col >= file.line
				|| (i + j) % file.col >= file.col
				|| i / file.col != (i + j) / file.col)
			return (0);
		if (j == bsq.length - 1 && k < bsq.length - 1)
		{
			i += file.col;
			j = 0;
			k++;
		}
		else
			j++;
	}
	return (1);
}

t_bsq	ft_go_bigger(t_bsq bsq, int *map, t_data file)
{
	bsq.length++;
	if (ft_check_square_position(map, bsq, file) == 1)
	{
		bsq.x_prev = bsq.x;
		bsq.y_prev = bsq.y;
		bsq.x_max--;
		bsq.y_max--;
		bsq.check_bigger = bsq.length;
	}
	return (bsq);
}

t_bsq	ft_move(t_bsq bsq, int *map, t_data file)
{
	while (ft_check_square_position(map, bsq, file) == 1)
		bsq = ft_go_bigger(bsq, map, file);
	bsq.length = bsq.check_bigger;
	if (bsq.x < bsq.x_max)
		bsq.x++;
	else if (bsq.y < bsq.y_max)
	{
		bsq.x = 0;
		bsq.y++;
	}
	if (bsq.x >= bsq.x_max && bsq.y >= bsq.y_max)
		bsq.end = 1;
	return (bsq);
}
