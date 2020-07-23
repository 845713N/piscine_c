/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:27:25 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/23 19:32:45 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int		ft_total_length(int size, char **strs, char *sep)
{
	int tot;
	int i;

	tot = 0;
	i = 0;
	while (i++ < size)
		tot += ft_strlen(strs[i - 1]);
	tot += ft_strlen(sep) * (size - 1);
	tot++;
	return (tot);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *output)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i++ < size)
	{
		j = 0;
		while (strs[i - 1][j])
			output[k++] = strs[i - 1][j++];
		if (i != size)
		{
			j = 0;
			while (sep[j])
				output[k++] = sep[j++];
		}
	}
	output[k] = '\0';
	return (output);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;

	if (size == 0)
	{
		if (!(output = malloc(sizeof(char) * 1)))
			return (0);
		output[0] = '\0';
		return (output);
	}
	else
	{
		if (!(output = malloc(sizeof(char) * ft_total_length(size, strs, sep))))
			return (0);
		output = ft_strcpy(size, strs, sep, output);
	}
	return (output);
}
