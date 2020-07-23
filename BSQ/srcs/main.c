/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:04:55 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/23 12:35:28 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int		main(int argc, char **argv)
{
	int		files;
	t_buf	buf;
	char	*file_name;

	files = 1;
	if (argc == 1)
	{
		files = 0;
		file_name = "map_stdin";
		buf = get_stdin(file_name);
	}
	while (files++ < argc)
	{
		if (argc != 1)
			file_name = argv[files - 1];
		buf = ft_import_file(file_name);
		if (buf.length != 0)
			ft_magic(buf);
		else
			ft_display_error();
		free(buf.file);
		if (files != argc)
			write(1, "\n", 1);
	}
	return (0);
}
