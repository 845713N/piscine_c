/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:37:37 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/19 23:36:28 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	search_number(char *dict, char *number)
{
	char	*n_dict;
	int		i;

	n_dict = ft_strstr(dict, number);
	i = 0;
	while (i < ft_strlen(n_dict))
	{
		while (n_dict[i] != ':')
			i++;
		while (n_dict[i] == 32 || n_dict[i] == ':')
			i++;
		while (n_dict[i] != '\n')
			ft_putchar(n_dict[i++]);
		i++;
	}
	ft_putchar(' ');
}
