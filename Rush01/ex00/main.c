/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemazur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:06:12 by mdemazur          #+#    #+#             */
/*   Updated: 2020/07/12 23:00:56 by huthiess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(int argc, char *argv[])
{
	char	tab[WIDTH * WIDTH];
	t_views	views;
	char	*arg;

	arg = argv[1];
	if (argc != 2
		|| !(arg = create_view(views.top, arg, 0))
		|| !(arg = create_view(views.bottom, arg, 0))
		|| !(arg = create_view(views.left, arg, 0))
		|| !(arg = create_view(views.right, arg, 1)))
	{
		ft_pustr("Error\n");
		return (1);
	}
	if (rush(0, tab, &views))
	{
		print_map(tab);
		return (0);
	}
	else
	{
		ft_pustr("Error\n");
		return (1);
	}
}
