/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 17:20:40 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/02 23:12:44 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_div_nb(int nb)
{
	int div;
	int i;

	div = 1;
	while (nb > 10)
	{
		nb /= 10;
		div++;
	}
	i = div;
	div = 1;
	while (i > 1)
	{
		div *= 10;
		i--;
	}
	return (div);
}

void	ft_display(int div, int nb)
{
	char nb_to_char;

	if (nb != 0)
	{
		while (div > 0)
		{
			nb_to_char = nb / div + 48;
			write(1, &nb_to_char, 1);
			nb %= div;
			div /= 10;
		}
	}
}

void	ft_putnbr(int nb)
{
	int	div;
	int	neg;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		nb = 0;
	}
	neg = 0;
	if (nb < 0)
	{
		nb *= -1;
		neg = 1;
	}
	div = ft_div_nb(nb);
	if (neg == 1)
	{
		write(1, "-", 1);
	}
	ft_display(div, nb);
}
