/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:42:57 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 07:46:19 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H

# define PROTOTYPES_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "structs_def.h"

int		ft_strlen(char *str);
int		ft_cmp(char c, char *str);
void	ft_display_error(void);
void	ft_display_input(char *str);
void	ft_display_output(int *map, t_data input);
t_data	ft_initialize_data(void);
char	*ft_recup_first_line(t_data input, char *file, int i, int fd);
t_data	ft_analyse_first_line(t_data input, char *file, int i, int j);
t_data	ft_analyse_file(int fd, t_data input, char *fl, unsigned int c);
t_data	ft_complete_check_file(char *file, t_data input);
int		*ft_recup_file(t_data input, int i, int fd);
t_bsq	ft_initialise_square(t_data file);
int		*ft_square_placement(int *map, t_bsq bsq, t_data file);
int		ft_check_square_position(int *map, t_bsq bsq, t_data file);
t_bsq	ft_go_bigger(t_bsq bsq, int *map, t_data file);
t_bsq	ft_move(t_bsq bsq, int *map, t_data file);
void	ft_magic(char *file, t_data input);

#endif
