/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aochlafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:36:18 by aochlafe          #+#    #+#             */
/*   Updated: 2020/07/04 14:38:30 by aochlafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int width, char corner)
{
	int x;

	ft_putchar(corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('-');
		x++;
	}
	if (x == width - 1)
		ft_putchar(corner);
	ft_putchar('\n');
}

void	last_line(int width, char corner)
{
	int x;

	ft_putchar(corner);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('-');
		x++;
	}
	if (x == width - 1)
		ft_putchar(corner);
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
	char	corner;
	char	side;
	int		y;

	if (width < 1 || height < 1)
		return ;
	corner = 'o';
	side = '|';
	first_line(width, corner);
	y = 1;
	while (y < height - 1)
	{
		body_line(width, side);
		y++;
	}
	if (y == height - 1)
		last_line(width, corner);
}
