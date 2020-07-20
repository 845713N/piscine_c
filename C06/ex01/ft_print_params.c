/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:52:08 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/20 12:31:20 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], sizeof(str[i]));
		i++;
	}
}

void	print_params(int argc, char **params)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(params[i++]);
		ft_putstr("\n");
	}
}

int		main(int argc, char **argv)
{
	print_params(argc, argv);
	return (0);
}
