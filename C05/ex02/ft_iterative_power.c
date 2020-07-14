/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:30:20 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/12 17:12:33 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int nb2;

	if (power == 0)
		nb2 = 1;
	nb2 = 1;
	while (power > 0)
	{
		nb2 *= nb;
		power--;
	}
	return (nb2);
}
