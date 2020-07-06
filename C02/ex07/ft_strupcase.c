/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:53:43 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/06 17:53:47 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;
	int test_upper;
	int test_other;

	i = 0;
	while (str[i])
	{
		test_upper = 'Z' - str[i] < 26 && 'Z' - str[i] >= 0;
		test_other = (!test_upper) && ('z' - str[i] >= 26 || 'z' - str[i] < 0);
		if (!(test_upper))
			if (!(test_other))
				str[i] -= 32;
		i++;
	}
	return (str);
}
