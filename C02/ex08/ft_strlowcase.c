/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:54:01 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 15:18:45 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	int test_lower;
	int test_other;

	i = 0;
	while (str[i])
	{
		test_lower = 'z' - str[i] < 26 && 'z' - str[i] >= 0;
		test_other = (!test_lower) && ('Z' - str[i] >= 26 || 'Z' - str[i] < 0);
		if (!(test_lower && test_other))
			str[i] += 32;
		i++;
	}
	return (str);
}
