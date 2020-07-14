/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huthiess <huthiess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:59:52 by huthiess          #+#    #+#             */
/*   Updated: 2020/07/12 23:41:21 by huthiess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		valid_views(char *tab, t_param_view *param_view, int required_views)
{
	int		views;
	char	min;
	int		eol;

	eol = param_view->start + 3 * param_view->step;
	views = 1;
	min = tab[param_view->start];
	param_view->start += param_view->step;
	while ((!(param_view->rev) && param_view->start <= param_view->end)
		|| (param_view->rev && param_view->start >= param_view->end))
	{
		if (tab[param_view->start] > min)
		{
			views++;
			min = tab[param_view->start];
		}
		if (views > required_views)
			return (0);
		param_view->start += param_view->step;
	}
	if (!(param_view->rev) && param_view->end == eol)
		return (views == required_views);
	return (1);
}

int		check_views(int i, char *tab, t_views *views)
{
	t_param_view param_view;

	param_view.start = i - i % WIDTH;
	param_view.end = i;
	param_view.step = 1;
	param_view.rev = 0;
	if (!valid_views(tab, &param_view, views->left[i / WIDTH]))
		return (0);
	param_view.start = i % WIDTH;
	param_view.end = i;
	param_view.step = WIDTH;
	if (!valid_views(tab, &param_view, views->top[i % WIDTH]))
		return (0);
	param_view.start = i;
	param_view.end = i / WIDTH;
	param_view.step = -1;
	param_view.rev = 1;
	if (i % WIDTH == WIDTH - 1
		&& !valid_views(tab, &param_view, views->right[i / WIDTH]))
		return (0);
	param_view.start = i;
	param_view.end = i % WIDTH;
	param_view.step = -WIDTH;
	return (!(i / WIDTH == WIDTH - 1
		&& !valid_views(tab, &param_view, views->bottom[i % WIDTH])));
}

int		is_placeable(int i, char *tab, t_views *views)
{
	int j;

	if (i > 0)
	{
		j = i - i % WIDTH;
		while (j < i)
		{
			if (tab[j] == tab[i])
				return (0);
			j++;
		}
		j = i % WIDTH;
		while (j < i)
		{
			if (tab[j] == tab[i])
				return (0);
			j += WIDTH;
		}
	}
	if (!check_views(i, tab, views))
		return (0);
	return (1);
}

int		rush(int i, char *tab, t_views *views)
{
	int is_finished;

	if (i < WIDTH * WIDTH)
	{
		tab[i] = '1';
		while (tab[i] <= '0' + WIDTH)
		{
			if (is_placeable(i, tab, views))
			{
				is_finished = rush(i + 1, tab, views);
				if (is_finished)
					return (is_finished);
			}
			tab[i]++;
		}
		return (0);
	}
	else
		return (1);
}

char	*create_view(int *view, char *str, int end)
{
	int index;

	index = 0;
	while (index < WIDTH * 2)
	{
		if (!(str[index] >= '1' && str[index] <= '0' + WIDTH))
			return (0);
		view[index / 2] = str[index] - '0';
		index++;
		if (end && index == WIDTH * 2 - 1)
		{
			if (str[index] == '\0')
				return (str + index);
			else
				return (0);
		}
		else if (str[index] == ' ')
			index++;
		else
			return (0);
	}
	return (str + index);
}
