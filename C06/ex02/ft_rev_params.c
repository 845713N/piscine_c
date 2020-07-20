/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:22:36 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/20 12:32:15 by bzalugas         ###   ########.fr       */
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

void	print_rev_params(int argc, char **params)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(params[i--]);
		ft_putstr("\n");
	}
}

int		main(int argc, char **argv)
{
	print_rev_params(argc, argv);
	return (0);
}
