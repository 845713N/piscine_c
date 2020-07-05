/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 09:51:32 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/04 03:39:27 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char *nb)
{
	write(1, nb, 3);
	if (!(nb[0] == '7' && nb[1] == '8' && nb[2] == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char nb[3];

	nb[0] = '0';
	while (nb[0] <= '7')
	{
		nb[1] = nb[0] + 1;
		nb[2] = nb[1] + 1;
		while (nb[1] <= '8')
		{
			while (nb[2] <= '9')
			{
				ft_putchars(nb);
				nb[2]++;
			}
			nb[1]++;
			nb[2] = nb[1] + 1;
		}
		nb[0]++;
		nb[1] = nb[0] + 1;
	}
}
