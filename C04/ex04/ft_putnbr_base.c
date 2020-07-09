/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:28:12 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/09 22:39:36 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_valid(char *base, int len_base)
{
	int i;

	i = 0;
	if (len_base > 1)
	{
		while (i < len_base - 1)
		{
			if (base[i] == base[i + 1] || base[i] == '+' || base[i] == '-')
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int len_base;

	len_base = ft_strlen(base);
	i = 0;
	if (is_valid(base, len_base))
	{
		if (nbr > len_base)
			ft_putnbr_base(nbr / len_base, base);
		ft_putchar(base[nbr % len_base]);
	}
}
