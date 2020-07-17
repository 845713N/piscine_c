/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 00:11:12 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/17 11:16:45 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int j;

	if (min >= max)
		tab = 0;
	else
	{
		tab = malloc(max - min);
		j = min;
		i = 0;
		while (j < max)
			tab[i++] = j++;
	}
	return (tab);
}
