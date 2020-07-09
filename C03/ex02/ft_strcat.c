/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:17:17 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 10:09:55 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int end_dest;

	end_dest = 0;
	while (dest[end_dest])
		end_dest++;
	i = 0;
	while (src[i])
		dest[end_dest++] = src[i++];
	return (dest);
}
