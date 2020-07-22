/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:04:55 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 20:07:54 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include "structs_def.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_data	input;
	int		files;
	char	*imported;
	t_buf	buf;
	char	*file_name;

	files = 1;
	if (argc == 1)
	{
		file_name = "map_stdin";
		buf = get_stdin(file_name);
		files = 0;
	}
	else
		file_name = argv[files];
	if (!(buf.length == 0))
	{
		while (files < argc)
		{
			input = ft_initialize_data();
			buf = ft_import_file(file_name);
			if (!(imported = malloc(sizeof(imported) * buf.length)))
				return (1);
			imported = buf.file;
			printf("%s\n", imported);
			input = ft_complete_check_file(imported, input);
			if (input.error == 0)
				ft_magic(imported, input);
			else
				ft_display_error();
			files++;
			if (files != argc)
				write(1, "\n", 1);
			free(imported);
		}
	}
	else
		ft_display_error();
	return (0);
}
