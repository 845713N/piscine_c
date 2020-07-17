/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:15:12 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 10:29:51 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	int end_dest;

	end_dest = 0;
	while (dest[end_dest])
		end_dest++;
	i = 0;
	while (i < nb)
		dest[end_dest++] = src[i++];
	return (dest);
}

int		main()
{
	char dest[20] = "Salut";
	char source[] = " bg dla street";
	unsigned int nb = 14;

	printf("%s+%s, nb = %d\n", dest,source,nb);
	printf("%s\n", ft_strncat(dest,source,nb));
}
