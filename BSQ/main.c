/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:04:55 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 12:00:58 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include "structs_def.h"
#include <stdio.h>

void	ft_print_data_file(t_data input);
void	ft_print_data_bsq(t_bsq bsq);
void	ft_print_map_numbers(int *map, t_data input);

int		main(int argc, char **argv)
{
	t_data	input;
	int		files;
	char	*test;
	t_buf	buf;

	files = 1;
	while (files < argc && argc > 1)
	{
		input = ft_initialize_data();
		buf = ft_import_file(argv[files]);
		if(!(test = malloc(sizeof(test) * buf.length)))
		   return (1);
		test = buf.file;
		printf("%s\n", test);
		input = ft_complete_check_file(argv[files], input);
		if (input.error == 0)
			ft_magic(argv[files], input);
		else
			ft_display_error();
		files++;
		if (files != argc)
			write(1, "\n", 1);
		free(test);
	}
	return (0);
}
