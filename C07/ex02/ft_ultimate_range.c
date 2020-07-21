/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:40:21 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/21 07:44:47 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int j;

	if (min >= max)
	{
		tab = malloc(sizeof(tab));
		tab = 0;
	}
	else
	{
		tab = malloc(sizeof(tab) * (max - min));
		j = min;
		i = 0;
		while (j < max)
			tab[i++] = j++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		if (!(range = malloc(sizeof(range))))
			return (-1);
		range = NULL;
		return (-1);
	}
	else
	{
		if (!(range = malloc(sizeof(range) * (max - min))))
			return (-1);
		*range = ft_range(min, max);
	}
	return (max - min);
}
