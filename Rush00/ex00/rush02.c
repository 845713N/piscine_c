/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aochlafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:41:01 by aochlafe          #+#    #+#             */
/*   Updated: 2020/07/04 14:44:32 by aochlafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int width, char top_corner)
{
	int x;

	ft_putchar(top_corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(top_corner);
	ft_putchar('\n');
}

void	last_line(int width, char bottom_corner)
{
	int x;

	ft_putchar(bottom_corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(bottom_corner);
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
	char	top_corner;
	char	bottom_corner;
	char	side;
	int		y;

	if (width < 1 || height < 1)
		return ;
	top_corner = 'A';
	bottom_corner = 'C';
	side = 'B';
	first_line(width, top_corner);
	y = 1;
	while (y < height - 1)
	{
		body_line(width, side);
		y++;
	}
	if (y == height - 1)
		last_line(width, bottom_corner);
}
