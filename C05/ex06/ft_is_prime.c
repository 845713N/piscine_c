/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 07:58:47 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/15 20:27:05 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int verif;

	verif = 0;
	if (nb > 1)
	{
		verif = 1;
		while (verif && verif * verif <= (unsigned int)nb)
		{
			if (nb % verif == 0 && verif < (unsigned int)nb && verif != 1)
				verif = 0;
			else
				verif++;
		}
	}
	if (verif == 0)
		return (0);
	return (1);
}
