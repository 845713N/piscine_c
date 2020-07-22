/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:54:22 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/19 17:24:48 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*init_dict(int argc, char **argv)
{
	int		fd;
	int		i;
	char	one_b_one;
	char	*name;
	char	*dict;

	name = "numbers.dict";
	if (argc == 3)
		name = argv[1];
	i = 0;
	one_b_one = 0;
	fd = open(name, O_RDONLY);
	if(fd == -1)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	while (read(fd, &one_b_one, 1))
		i++;
	close(fd);
	if (!(dict = malloc(sizeof(dict) * i)))
		return (NULL);
	dict[i] = 0;
	fd = open(name, O_RDONLY);
	if(fd == -1)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	read(fd, dict, i);
	close(fd);
	return (dict);
}
