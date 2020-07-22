/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:25:19 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 20:03:59 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_cmp(char c, char *str)
{
	int len;
	int i;

	len = ft_strlen(str);
	i = 1;
	while (i < 4)
	{
		if (c == str[len - i])
			return (0);
		i++;
	}
	return (1);
}

t_data	ft_complete_check_file(char *file, t_data input)
{
	char	*fl;

	fl = ft_recup_first_line(input, file, 0);
	input = ft_analyse_first_line(input, 0, 0, file);
	input = ft_analyse_file(file, input, fl, 0);
	input.max = input.line * input.col;
	return (input);
}

void	ft_magic(char *file, t_data input)
{
	int		*map;
	t_bsq	bsq;

	map = NULL;
	map = ft_recup_file(input, 0, 0, file);
	bsq = ft_initialise_square(input);
	while (bsq.end == 0)
		bsq = ft_move(bsq, map, input);
//	bsq = ft_bigger_move_recursive(bsq, map, input);
	map = ft_square_placement(map, bsq, input);
	ft_display_output(map, input);
	free(map);
}

t_bsq	ft_bigger_move_recursive(t_bsq bsq, int *map, t_data file)
{
	bsq = ft_go_bigger(bsq, map, file);
	if (ft_check_square_position(map, bsq, file) == 1)
		return (ft_bigger_move_recursive(bsq, map, file));
	bsq = ft_move(bsq, map, file);
	if (ft_check_square_position(map, bsq, file) == 0)
		return (ft_bigger_move_recursive(bsq, map, file));
	if (bsq.end == 1)
		return (bsq);
	else
		return (ft_bigger_move_recursive(bsq, map, file));
}
