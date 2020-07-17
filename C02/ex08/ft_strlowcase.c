/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:54:01 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 09:39:13 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	int test_upper;

	i = 0;
	while (str[i])
	{
		test_upper = str[i] >= 'A' && str[i] <= 'Z';
		if (test_upper)
			str[i] += 32;
		i++;
	}
	return (str);
}
