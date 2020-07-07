/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:52:48 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 15:13:13 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int test_upper;

	i = 0;
	while (str[i])
	{
		test_upper = (('Z' - str[i] < 26) && ('Z' - str[i] >= 0));
		if (!test_upper)
			return (0);
		i++;
	}
	return (1);
}
