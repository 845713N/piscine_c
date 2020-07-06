/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:17:26 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/06 21:13:38 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_size;

	i = 0;
	src_size = 0;
	while (src[i])
	{
		src_size++;
		i++;
	}
	i = 0;
	while ((i < size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= size - 1)
		dest[i++] = 0;
	return (src_size);
}
