/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:35:29 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/02 17:16:04 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int nb1, int nb2)
{
	char nb_tmp;

	nb_tmp = nb1 / 10 + 48;
	write(1, &nb_tmp, 1);
	nb_tmp = nb1 % 10 + 48;
	write(1, &nb_tmp, 1);
	write(1, " ", 1);
	nb_tmp = nb2 / 10 + 48;
	write(1, &nb_tmp, 1);
	nb_tmp = nb2 % 10 + 48;
	write(1, &nb_tmp, 1);
	if (!(nb1 == 98 && nb2 == 99))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 < 99)
	{
		nb2 = nb1 + 1;
		if (nb1 < nb2)
		{
			while (nb2 <= 99)
			{
				ft_putchars(nb1, nb2);
				nb2++;
			}
		}
		nb1++;
	}
}
