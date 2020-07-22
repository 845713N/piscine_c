/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 10:17:02 by eaubert           #+#    #+#             */
/*   Updated: 2020/07/19 21:35:05 by eaubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*init_dict(int argc, char **argv);
char	*ft_strstr(char *str, char *to_find);
void	search_number(char *dict, char *number);
void	translate(char *dict, char *number);
char	*get_power(int nb);

#endif
