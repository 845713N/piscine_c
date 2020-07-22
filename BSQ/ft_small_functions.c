/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:25:19 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 07:39:56 by adpillia         ###   ########.fr       */
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
	int		fd;

	fl = ft_recup_first_line(input, file, 0, 0);
	input = ft_analyse_first_line(input, file, 0, 0);
	fd = open(file, 0);
	input = ft_analyse_file(fd, input, fl, 0);
	close(fd);
	free(fl);
	input.max = input.line * input.col;
	return (input);
}

void	ft_magic(char *file, t_data input)
{
	int		fd;
	int		*map;
	t_bsq	bsq;

	map = NULL;
	fd = open(file, 0);
	map = ft_recup_file(input, 0, fd);
	bsq = ft_initialise_square(input);
	while (bsq.end == 0)
		bsq = ft_move(bsq, map, input);
	map = ft_square_placement(map, bsq, input);
	ft_display_output(map, input);
	close(fd);
	free(map);
}
