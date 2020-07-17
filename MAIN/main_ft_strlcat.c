/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:25:56 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/09 08:25:58 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_length;
    unsigned int dest_length;

    i = 0;
    src_length = 0;
    while (src[src_length])
	src_length++;
    dest_length = 0;
    while (dest[dest_length])
	dest_length++;
    if (size > 0)
	{
	    i = 0;
	    while ((i < size - dest_length - 1) && src[i])
		{
		    dest[dest_length + i] = src[i];
		    i++;
		}
	    while (i <= size - dest_length - 1)
		dest[i++] = 0;
	}
    return (dest_length + src_length);
}

int	main()
{
    char dest[0];
    int dest_size = 0;
    char src[] = "bonjour";

    printf("%s+%s = \n", dest, src);
    printf("%lu\n", strlcat(dest,src,dest_size));
    printf("%u\n", ft_strlcat(dest,src,dest_size));
}
