/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 00:11:12 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/17 15:25:29 by bzalugas         ###   ########.fr       */
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
