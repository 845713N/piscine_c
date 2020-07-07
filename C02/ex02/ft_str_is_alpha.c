/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:21:27 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 15:05:56 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int test_upper;
	int test_lower;

	i = 0;
	while (str[i])
	{
		test_upper = (('Z' - str[i] < 26) && ('Z' - str[i] >= 0));
		test_lower = (('z' - str[i] < 26) && ('z' - str[i] >= 0));
		if (!(test_upper || test_lower))
			return (0);
		i++;
	}
	return (1);
}
