/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:52:22 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 15:07:48 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int test_lower;

	i = 0;
	while (str[i])
	{
		test_lower = (('z' - str[i] < 26) && ('z' - str[i] >= 0));
		if (!test_lower)
			return (0);
		i++;
	}
	return (1);
}
