/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:27:25 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/20 19:09:26 by bzalugas         ###   ########.fr       */
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

int		total_len(int size, char **strs, char *sep)
{
	int		nb_str;
	int		sep_size;

	nb_str = ft_strlen(*strs);
	sep_size = ft_strlen(sep);

	return (size + (nb_str * sep_size));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*n_str;
	int		i;
	int		j;
	int		k;
 
	if (size == 0)
		n_str = 0;
	else
	{
		i = 0;
		j = -1;
		k = 0;
		n_str = malloc(sizeof(n_str) * total_len(size, strs, sep));
		while(j++ < size - 1)
		{
			i = 0;
			while (strs[j][i])
				n_str[k++] = strs[j][i++];
			i = 0;
			while (sep[i] && j < size - 1)
				n_str[k++] = sep[i++];
		}
		n_str[k] = 0;
	}
	return (n_str);
}
