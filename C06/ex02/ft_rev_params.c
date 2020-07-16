/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:22:36 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/16 14:43:20 by bzalugas         ###   ########.fr       */
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
	write(1, "\n", 1);
}

void	print_rev_params(int argc, char **params)
{
	int i;

	i = argc - 1;
	while (i > 0)
		ft_putstr(params[i--]);
}

int		main(int argc, char **argv)
{
	print_rev_params(argc, argv);
	return (0);
}
