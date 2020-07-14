/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:35:42 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/14 09:51:33 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int nb2;

	nb2 = 1;
	if (power == 0)
		return (1);
	if (power > 0)
		nb2 *= ft_recursive_power(nb, power - 1);
	return (nb2 * nb);
}
