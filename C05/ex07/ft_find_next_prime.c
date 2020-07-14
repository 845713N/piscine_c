/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:52:37 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/14 10:18:07 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int verif;

	verif = 0;
	if (nb > 1)
	{
		verif = 1;
		while (verif && verif * verif < (unsigned int)nb)
		{
			if (nb % verif == 0 && verif != (unsigned int)nb && verif != 1)
				verif = 0;
			else
				verif++;
		}
	}
	if (verif == 0)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
