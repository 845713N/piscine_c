/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khelegbe <khelegbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:37:42 by khelegbe          #+#    #+#             */
/*   Updated: 2020/07/19 22:57:54 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	char	*dict;
	int		all_zero;
	int		len;
	int		i;

	i = 0;
	if ((dict = init_dict(argc, argv)) == NULL)
		return (-1);
	else
	{
		len = ft_strlen(argv[1]);
		all_zero = 1;
		while (i < len && all_zero)
		{
			if (argv[1][i] != '0')
				all_zero = 0;
			if (all_zero)
				i++;
		}
		if (all_zero)
			search_number(dict, "0");
		else
			translate(dict, &argv[1][i]);
	}
	free(dict);
	return (0);
}
