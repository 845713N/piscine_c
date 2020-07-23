/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:40:21 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/23 19:18:38 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(range[0] = malloc(sizeof(*range) * (max - min))))
		return (-1);
	i = 0;
	while (i++ < max - min)
		range[0][i - 1] = i - 1 + min;
	return (i - 1);
}
