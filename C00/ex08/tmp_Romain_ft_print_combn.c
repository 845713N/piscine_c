/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:14:13 by rsanchez          #+#    #+#             */
/*   Updated: 2020/07/02 15:25:35 by rsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(int num[], int n)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < n)
	{
		if (!(num[i] < num[j]))
		{
			return (0);
		}
		i++;
		j++;
	}
	return (1);
}

void	ft_increment(int num[], int n)
{
	int i;

	if (num[n - 1] == 9)
	{
		i = n - 2;
		num[n - 1] = 0;
		while (i >= 0 && num[i] == 9)
		{
			num[i] = 0;
			i--;
		}
		if (i >= 0)
			num[i]++;
		else
		{
			num[0] = 10;
		}
	}
	else
	{
		num[n - 1]++;
	}
}

void	ft_send(int num[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + 48);
		i++;
	}
	if ((num[0] < 10 - n))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int num[n];
	int i;

	i = 0;
	while (i < n)
	{
		num[i] = 0;
		i++;
	}
	while (num[0] < 10)
	{
		if (ft_check(num, n) == 1)
		{
			ft_send(num, n);
		}
		ft_increment(num, n);
	}
}
