/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 07:13:59 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 10:07:27 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_printable(char c)
{
	return (c > 31 && c < 127);
}

void	print_dec_to_hexa(unsigned char c)
{
	unsigned char new_c[2];

	new_c[0] = (c / 16);
	if (new_c[0] > 9)
		new_c[0] = new_c[0] - 10 + 'a';
	else
		new_c[0] = new_c[0] + '0';
	new_c[1] = c % 16;
	if (new_c[1] > 9)
		new_c[1] = new_c[1] - 10 + 'a';
	else
		new_c[1] = new_c[1] + '0';
	write(1, &new_c[0], 1);
	write(1, &new_c[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
		{
			ft_putchar('\\');
			print_dec_to_hexa((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
