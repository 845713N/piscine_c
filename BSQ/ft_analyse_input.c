/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyse_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:25:47 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/21 14:05:29 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

t_data	ft_analyse_file(int fd, t_data input, char *fl, unsigned int c)
{
	char			w;
	unsigned int	l;

	while (read(fd, &w, 1) != 0 && w != '\n')
		l = 0;
	while (read(fd, &w, 1) != 0 && input.error == 0)
	{
		if (w != '\n')
			c++;
		else if (l == 0)
			input.col = c;
		if (l >= input.line || (w == '\n' && c != input.col)
				|| (w != '\n' && ft_cmp(w, fl) == 1))
			input.error = -1;
		else if (w == '\n')
		{
			l++;
			c = 0;
		}
	}
	return (input);
}

t_data	ft_initialize_data(void)
{
	t_data input;

	input.line = 0;
	input.col = 0;
	input.empty = '\0';
	input.obstacle = '\0';
	input.fill = '\0';
	input.error = 0;
	input.max = 0;
	return (input);
}

char	*ft_recup_first_line(t_data input, char *file, int i, int fd)
{
	char	c;
	char	*recup;

	fd = open(file, 0);
	if (fd == -1 || input.error == -1)
	{
		ft_display_error();
		recup = NULL;
	}
	else
	{
		while (read(fd, &c, 1) != 0 && c != '\n')
			i++;
		if (!(recup = malloc(sizeof(char) * i)))
			return (NULL);
		close(fd);
		fd = open(file, 0);
		i = 0;
		while (read(fd, &c, 1) != 0 && c != '\n')
			recup[i++] = c;
		recup[i] = '\0';
	}
	close(fd);
	return (recup);
}

t_data	ft_analyse_first_line(t_data input, char *file, int i, int j)
{
	char	*recup;

	recup = ft_recup_first_line(input, file, i, 0);
	j = ft_strlen(recup);
	while (recup[i] >= '0' && recup[i] <= '9')
		input.line += input.line * 10 + recup[i++] - 48;
	if (j - i == 3)
	{
		if (recup[i] >= 32 && recup[i] < 127)
			input.empty = recup[i++];
		if (recup[i] != input.empty && recup[i] >= 32 && recup[i] < 127)
			input.obstacle = recup[i++];
		if (recup[i] != input.empty && recup[i] != input.obstacle
				&& recup[i] >= 32 && recup[i] < 127)
			input.fill = recup[i++];
	}
	if (recup[i] != '\0' || input.line == 0
			|| input.empty == '\0' || input.obstacle == '\0')
		input.error = -1;
	free(recup);
	return (input);
}

int		*ft_recup_file(t_data input, int i, int fd)
{
	int		*map;
	char	c;

	if (!(map = malloc(sizeof(int) * input.max)))
		return (NULL);
	else
	{
		if (fd != -1 && input.error != -1 && input.col * input.line != 0)
		{
			while (read(fd, &c, 1) != 0 && c != '\n')
				i = 0;
			while (read(fd, &c, 1) != 0)
			{
				if (c == input.empty)
					map[i++] = 0;
				else if (c == input.obstacle)
					map[i++] = 1;
				else if ((i + 1) % input.col == 0 && c != '\n')
					input.error = -1;
			}
		}
		else
			ft_display_error();
	}
	return (map);
}
