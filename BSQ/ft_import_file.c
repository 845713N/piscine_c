/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:01:47 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/22 20:08:27 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

t_buf	swap(int fd, int i, char *output, char *temp)
{
	t_buf	buf;
	int		j;
	char	c;

	while (read(fd, &c, 1))
	{
		free(temp);
		if (!(temp = malloc(sizeof(char) * (i + 1))))
			buf.length = 0;
		j = 0;
		while (j++ < i)
			temp[j - 1] = output[j - 1];
		free(output);
		if (!(output = malloc(sizeof(char) * (i + 1))))
			buf.length = 0;
		j = 0;
		while (j++ < i)
			output[j - 1] = temp[j - 1];
		output[i++] = c;
	}
	close(fd);
	output[i] = 0;
	buf.length = i;
	buf.file = output;
	return (buf);
}

t_buf	ft_clean_output(t_buf buf)
{
	int		i;
	int		j;
	char	*n_buf;

	i = 0;
	while (buf.file[i])
		if (buf.file[i] == '\n')
			i++;
	n_buf = malloc(sizeof(n_buf) * (buf.length - i - 1));
	i = 0;
	while (buf.file[i] != '\n')
		i++;
	i++;
	j = 0;
	while (buf.file[i])
	{
		if (buf.file[i] != '\n')
			n_buf[j++] = buf.file[i];
		i++;
	}
	buf.file = n_buf;
	return (buf);
}

t_buf	ft_import_file(char *file)
{
	int		fd;
	char	*temp;
	char	*output;
	t_buf	buf;

	temp = NULL;
	output = NULL;
	if ((fd = open(file, 0)) == -1)
		buf.length = 0;
	return (swap(fd, 0, output, temp));
}

t_buf	get_stdin(char *file)
{
	t_buf	buf;
	int		fd;
	char	c;

	if (!(fd = open(file, O_TRUNC | O_CREAT | O_WRONLY, 0666)))
		buf.length = 0;
	while (read(0, &c, 1) > 0)
		write(fd, &c, 1);
	return (buf);
}
