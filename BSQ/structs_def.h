/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs_def.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:43:50 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/21 18:57:37 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_DEF_H

# define STRUCTS_DEF_H

typedef	struct s_input_data	t_data;
struct	s_input_data
{
	unsigned int		line;
	unsigned int		col;
	char				empty;
	char				obstacle;
	char				fill;
	int					error;
	unsigned int		max;
};

typedef struct s_bsq	t_bsq;
struct	s_bsq
{
	unsigned int x;
	unsigned int y;
	unsigned int length;
	unsigned int x_max;
	unsigned int y_max;
	unsigned int x_prev;
	unsigned int y_prev;
	unsigned int check_bigger;
	unsigned int end;
};

#endif
