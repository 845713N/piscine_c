/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:46:24 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/03 12:05:01 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_verif_comb(char *comb, int n)
{
	int		i;
	char	valide;

	i = n - 1;
	valide = 't';
	while (i > 0 && valide == 't')
	{
		if (comb[i] <= comb[i - 1])
		{
			valide = 'f';
		}
		i--;
	}
	return (valide);
}

void	ft_printcomb(char *comb, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = comb[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_comb_increment(char *comb, int n)
{
	int		i;
	char	c;

	c = 'f';
	while (c == 'f')
	{
		i = n - 1;
		while (comb[i] == '9' && i >= 0)
		{
			comb[i] = '0';
			i--;
		}
		if (i >= 0)
		{
			comb[i]++;
		}
		c = ft_verif_comb(comb, n);
	}
}

void	ft_print_combn(int n)
{
	char	comb[n];
	int		i;

	i = 0;
	while (i < n)
	{
		comb[i] = '0';
		i++;
	}
	while (comb[0] != '9' - n + 1)
	{
		ft_comb_increment(comb, n);
		ft_printcomb(comb, n);
		if (comb[0] != '9' - n + 1)
		{
			write(1, ", ", 2);
		}
	}
}
