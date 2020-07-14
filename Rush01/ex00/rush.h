/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huthiess <huthiess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:20:06 by huthiess          #+#    #+#             */
/*   Updated: 2020/07/12 23:20:06 by huthiess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# define WIDTH 4

typedef struct
{
	int	top[WIDTH];
	int	bottom[WIDTH];
	int	left[WIDTH];
	int	right[WIDTH];
}		t_views;

typedef struct
{
	int start;
	int end;
	int step;
	int rev;
}		t_param_view;

void	ft_pustr(char *str);
void	print_map(char *tab);
char	*create_view(int *view, char *str, int end);
int		rush(int i, char *tab, t_views *views);

#endif
