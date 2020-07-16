/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:31:28 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/15 15:13:44 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int i;

	if (nb <= 0)
		return (0);
	i = 1;
	if (!(nb % 2))
		i = 0;
	while (i * i < (unsigned int)nb)
		i += 2;
	if (i * i == (unsigned int)nb)
		return (i);
	return (0);
}
