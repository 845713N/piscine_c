/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:44:39 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/05 16:43:16 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_ascending(int *tab, int n)
{
	int i;

	i = n - 1;
	while (i > 0)
	{
		if (tab[i] <= tab[i - 1])
			return (0);
		i--;
	}
	return (1);
}

void	increment(int *tab, int n)
{
	int i;

	i = n - 1;
	tab[i]++;
	while (i > 0)
	{
		while (tab[i] <= tab[i - 1] && i > 0)
			tab[i]++;
		while (tab[i] > 9 && i > 0)
		{
			tab[i] = 0;
			tab[i - 1]++;
		}
		i--;
	}
	if (!check_ascending(tab, n))
		increment(tab, n);
}

void	display(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
		ft_putchar(tab[i++] + 48);
	if (!(tab[0] >= 10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int tab[10];
	int i;

	i = 0;
	if (n > 1 && n < 10)
	{
		while (i < n)
			tab[i++] = 0;
		while (tab[0] < 10 - n)
		{
			increment(tab, n);
			display(tab, n);
		}
	}
	else if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	}
}
