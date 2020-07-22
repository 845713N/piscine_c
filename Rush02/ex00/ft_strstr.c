/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:34:39 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/19 23:36:20 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i_t;

	i = 0;
	i_t = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		i_t = 0;
		while (str[i + i_t] == to_find[i_t] && to_find[i_t])
			i_t++;
		if (!to_find[i_t])
			return (&str[i]);
		else
			i++;
	}
	return (0);
}
