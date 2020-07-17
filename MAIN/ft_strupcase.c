/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:53:43 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 09:36:04 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int i;
	int test_lower;

	i = 0;
	while (str[i])
	{
		test_lower = str[i] >= 'a' && str[i] <= 'z';
		if (test_lower)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "rekt^q^w";
	printf("%s\n", ft_strupcase(str));
}
