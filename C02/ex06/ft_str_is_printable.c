/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:53:20 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 19:30:28 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int test_printable;

	i = 0;
	while (str[i])
	{
		test_printable = ((unsigned char)str[i] > 31
				&& (unsigned char)str[i] < 127);
		if (!test_printable)
			return (0);
		i++;
	}
	return (1);
}
