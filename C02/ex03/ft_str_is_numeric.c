/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 12:07:45 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 15:06:41 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int is_numeric;

	i = 0;
	while (str[i])
	{
		is_numeric = ('9' - str[i] < 10 && '9' - str[i] >= 0);
		if (!is_numeric)
			return (0);
		i++;
	}
	return (1);
}
