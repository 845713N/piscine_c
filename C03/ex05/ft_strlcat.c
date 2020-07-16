/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:25:56 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/13 14:58:39 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_length;
	unsigned int dest_length;

	i = 0;
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (src_length + size);
	if (size > 0)
	{
		i = 0;
		while ((i < size - dest_length - 1) && src[i])
		{
			dest[i + dest_length] = src[i];
			i++;
		}
		if (i <= size - dest_length - 1)
			dest[i + dest_length] = 0;
	}
	return (dest_length + src_length);
}
