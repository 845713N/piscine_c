/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyse_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:25:47 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/22 14:00:47 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

t_data	ft_analyse_file(char *file, t_data input, char *fl, unsigned int c)
{
	unsigned int	i;
	unsigned int	l;
	unsigned int	skip;

	skip = 0;
	i = 0;
	while (file[skip] != 0 && file[skip++] != '\n')
		l = 0;
	while (file[skip + i] != 0 && input.error == 0)
	{
		if (file[skip + i] != '\n')
			c++;
		else if (l == 0)
			input.col = c;
		if (l >= input.line || (file[skip + i] == '\n' && c != input.col)
				|| (file[skip + i] != '\n' && ft_cmp(file[skip + i], fl) == 1))
			input.error = -1;
		else if (file[skip + i] == '\n')
		{
			l++;
			c = 0;
		}
		i++;
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

char	*ft_recup_first_line(t_data input, char *file, int i)
{
	char	*recup;

	if (input.error == -1)
	{
		ft_display_error();
		recup = NULL;
	}
	else
	{
		while (file[i] != 0 && file[i] != '\n')
			i++;
		if (!(recup = malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while (file[i] != 0 && file[i++] != '\n')
			recup[i - 1] = file[i - 1];
		recup[i] = '\0';
	}
	return (recup);
}

t_data	ft_analyse_first_line(t_data input, int i, int j, char *file)
{
	char	*recup;

	recup = ft_recup_first_line(input, file, i);
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

int		*ft_recup_file(t_data input, int i, int skip, char *file)
{
	int				*map;

	if (!(map = malloc(sizeof(int) * input.max)))
		return (NULL);
	else
	{
		if (input.error != -1 && input.col * input.line != 0)
		{
			while (file[skip] != 0 && file[skip++] != '\n')
				i = 0;
			while (file[skip + i] != 0)
			{
				if (file[skip + i] == input.empty)
					map[i++] = 0;
				else if (file[skip + i] == input.obstacle)
					map[i++] = 1;
				else if ((i + 1) % input.col == 0 && file[skip + i] != '\n')
					input.error = -1;
				else
					skip++;
			}
		}
	}
	return (map);
}
