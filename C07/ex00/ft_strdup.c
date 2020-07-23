/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 19:54:01 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/23 09:18:27 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i++])
		dest[i - 1] = src[i - 1];
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	char *str = "qYNvShGmrpkdp88H7Qgur298t2gIY889G";

	printf("%s\n", ft_strdup(str));
}
