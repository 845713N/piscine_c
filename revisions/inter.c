/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:11:59 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/23 16:42:35 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_char(char *s1, char *s2, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (s2[j])
	{
		if (s1[i] != s2[j])
			j++;
		else
		{
			while (k < i)
			{
				if (s1[k] != s1[i])
					k++;
				else
					return (0);
			}
			return (1);
		}
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (check_char(str1, str2, i))
			ft_putchar(str1[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
