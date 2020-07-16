/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:31:28 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/15 11:54:13 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				end_dest;

	end_dest = 0;
	while (dest[end_dest])
		end_dest++;
	i = 0;
	while (i < nb && src[i])
		dest[end_dest++] = src[i++];
	dest[end_dest] = 0;
	return (dest);
}
