/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aochlafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:33:46 by aochlafe          #+#    #+#             */
/*   Updated: 2020/07/04 14:34:28 by aochlafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int width, char top_l_bot_r, char top_r_bot_l)
{
	int x;

	ft_putchar(top_l_bot_r);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(top_r_bot_l);
	ft_putchar('\n');
}

void	last_line(int width, char top_l_bot_r, char top_r_bot_l)
{
	int x;

	ft_putchar(top_r_bot_l);
	x = 1;
	while (x < width - 1)
	{
		ft_putchar('B');
		x++;
	}
	if (x == width - 1)
		ft_putchar(top_l_bot_r);
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
	char	top_l_bot_r;
	char	top_r_bot_l;
	char	side;
	int		y;

	if (width < 1 || height < 1)
		return ;
	top_l_bot_r = 'A';
	top_r_bot_l = 'C';
	side = 'B';
	first_line(width, top_l_bot_r, top_r_bot_l);
	y = 1;
	while (y < height - 1)
	{
		body_line(width, side);
		y++;
	}
	if (y == height - 1)
		last_line(width, top_l_bot_r, top_r_bot_l);
}
