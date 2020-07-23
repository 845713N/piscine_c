/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:01:47 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/23 12:31:58 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

t_buf	ft_buf_update(t_buf buf, int i, char *output)
{
	int j;

	j = 0;
	if (i != 0)
	{
		buf.file = malloc(sizeof(char) * i);
		output[i] = 0;
		buf.length = i;
		while (j++ < i)
			buf.file[j - 1] = output[j - 1];
		buf.file[j] = 0;
	}
	return (buf);
}

void	ft_free_of_the_poor(char *p1, char *p2)
{
	free(p1);
	free(p2);
}

t_buf	swap(int fd, int i, char *output, char *temp)
{
	t_buf	buf;
	int		j;
	char	c;

	buf.length = 0;
	buf.file = NULL;
	while (read(fd, &c, 1))
	{
		free(temp);
		if (!(temp = malloc(sizeof(char) * (i + 1))))
			buf.length = 0;
		j = 0;
		while (j++ < i)
			temp[j - 1] = output[j - 1];
		free(output);
		if (!(output = malloc(sizeof(char) * (i + 2))))
			buf.length = 0;
		j = 0;
		while (j++ < i)
			output[j - 1] = temp[j - 1];
		output[i++] = c;
	}
	close(fd);
	ft_free_of_the_poor(output, temp);
	return (ft_buf_update(buf, i, output));
}

t_buf	ft_import_file(char *file)
{
	int		fd;
	char	*temp;
	char	*output;
	t_buf	buf;

	temp = NULL;
	output = NULL;
	buf.length = 0;
	buf.file = NULL;
	fd = open(file, 0);
	if (fd == -1)
		return (buf);
	buf = (swap(fd, 0, output, temp));
	return (buf);
}

t_buf	get_stdin(char *file)
{
	t_buf	buf;
	int		fd;
	char	c;

	buf.file = NULL;
	buf.length = 0;
	if (!(fd = open(file, O_TRUNC | O_CREAT | O_WRONLY, 0666)))
		buf.length = 0;
	while (read(0, &c, 1) > 0)
		write(fd, &c, 1);
	return (buf);
}
