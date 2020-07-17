/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:04:37 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/14 11:45:27 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	if (n==0)
		return ('\0');
	diff = 0;
	while (i < n && diff == 0 && (s1[i] || s2[i]))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
int	main()
{
	char s1[] = "salut";
	char s2[] = "salv";
	unsigned int n = 4;
	printf("%d\n", strncmp(s1,s2,n));
	printf("%d\n", ft_strncmp(s1,s2,n));
}
