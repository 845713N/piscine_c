/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aochlafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:46:30 by aochlafe          #+#    #+#             */
/*   Updated: 2020/07/04 14:49:49 by aochlafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int width, char left_corner, char right_corner)
{
	int x;

	ft_putchar(left_corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(right_corner);
	ft_putchar('\n');
}

void	last_line(int width, char left_corner, char right_corner)
{
	int x;

	ft_putchar(left_corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(right_corner);
	ft_putchar('\n');
}

void	body_line(int width, char side)
{
	int x;

	ft_putchar(side);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar(' ');
		x++;
	}
	if (x == width - 1)
		ft_putchar(side);
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	char	left_corner;
	char	right_corner;
	char	side;
	int		y;

	if (width < 1 || height < 1)
		return ;
	left_corner = 'A';
	right_corner = 'C';
	side = 'B';
	first_line(width, left_corner, right_corner);
	y = 1;
	while (y < height - 1)
	{
		body_line(width, side);
		y++;
	}
	if (y == height - 1)
		last_line(width, left_corner, right_corner);
}
