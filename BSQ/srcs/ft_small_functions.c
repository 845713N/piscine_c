/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:25:19 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/23 12:26:13 by bzalugas         ###   ########.fr       */
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
	free(fl);
	return (input);
}

void	ft_magic(t_buf buf)
{
	int		*map;
	t_bsq	bsq;
	t_data	input;

	input = ft_initialize_data();
	input = ft_complete_check_file(buf.file, input);
	if (input.error == 0)
	{
		map = NULL;
		map = ft_recup_file(input, 0, 0, buf.file);
		bsq = ft_initialise_square(input);
		while (bsq.end == 0)
			bsq = ft_move(bsq, map, input);
		map = ft_square_placement(map, bsq, input);
		ft_display_output(map, input);
		free(map);
	}
	else
		ft_display_error();
}
