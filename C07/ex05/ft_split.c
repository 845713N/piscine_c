/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 07:48:47 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/21 13:58:23 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
		if (charset [i++] == c)
			return (1);
	return (0);
}

int		is_new_word(char *str, int i, char *charset)
{
	if (!is_charset(str[i], charset))
	{
		if (i == 0)
			return (1);
		else if (is_charset(str[i - 1], charset))
			return (1);
	}
	else if (i == 0)

	return (0);
}

int		*len_w(char *str, char *charset, int count)
{
	int	*tab;
	int	i;
	int	j;

	tab = malloc(sizeof(tab) * count);
	i = 0;
	while (i < count)
		tab[i++] = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		while(!is_charset(str[i++], charset))
			tab[j]++;
		j++;
	}
	return (tab);
}

int		nbr_words(char *str, char *charset)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (is_new_word(str, i, charset))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**n_str;
	int		i;
	int		j;
	int		k;
	int		words;

	words = nbr_words(str, charset);
	n_str = malloc(sizeof(n_str) * words);
	i = 0;
	j = 0;
	while (j < words && str[i])
	{
		k = 0;
		if (is_new_word(str, i, charset))
			n_str[j] = malloc(sizeof(n_str[i]) * len_w(str, charset, words)[j]);
		while (!is_charset(str[i], charset) && str[i])
			n_str[j][k++] = str[i++];
		if (i > 0 && !is_charset(str[i - 1], charset))
			n_str[j++][k] = 0;
		while (!is_new_word(str, i, charset) && str[i])
			i++;
	}
	n_str[j] = 0;
	return (n_str);
}
