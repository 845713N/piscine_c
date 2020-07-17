/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:17:17 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/08 09:09:13 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

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

int	main()
{
	char dest[25] = "Ta mere";
	char src[] = " la bellegosse";

	printf("%s+%s\n", dest,src);
	printf("%s\n", ft_strcat(dest,src));
}
