/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 07:13:59 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 07:56:10 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char hexa(char c);
{
	if (c > 9)
		c = (c - 10) + 'a';
	return (c);
}

void convert_dec_hexa(char c)
{
	int remain;

	while (c / 16)
		convert_dec_hexa(c / 16);
	

}

int		main()
{
	char c = A;
	convert_dec_hexa(c);
}
