/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:44:11 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/19 23:39:37 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	translate(char *dict, char *number)
{
	int		i;
	int		len;
	char	temp[3];
	int		no_need;

	i = 0;
	len = ft_strlen(number);
	no_need = 0;
	while (i < len)
	{
		if ((len - i) % 3 == 0 && number[i] != '0')
		{
			temp[0] = number[i];
			temp[1] = '\0';
			search_number(dict, temp);
			if (number[i] != '0')
				search_number(dict, "100");
		}
		else if ((len - i) % 3 == 2 && number[i] != '0')
		{
			if (number[i] == '1')
			{
				temp[0] = number[i];
				temp[1] = number[i + 1];
				temp[2] = '\0';
				search_number(dict, temp);
				no_need = 1;
			}
			else
			{
				temp[0] = number[i];
				temp[1] = '0';
				temp[2] = '\0';
				search_number(dict, temp);
			}
		}
		else if ((len - i) % 3 == 1)
		{
			if (no_need == 0)
			{
				if (number[i] != '0')
				{
					temp[0] = number[i];
					temp[1] = '\0';
					search_number(dict, temp);
				}
				if (len - i > 3)
					search_number(dict, get_power((len - i) / 3));
			}
			else if (len - i > 3)
			{
				no_need = 0;
				search_number(dict, get_power((len - i) / 3));
			}
		}
		i++;
	}
	ft_putchar("\n");
}
