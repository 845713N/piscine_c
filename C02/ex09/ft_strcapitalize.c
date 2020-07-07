/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 14:36:09 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/07 19:32:08 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_u_case(char str)
{
	return (('A' <= str) && (str <= 'Z'));
}

int		is_l_case(char str)
{
	return (('a' <= str) && (str <= 'z'));
}

int		is_alphanum(char str)
{
	return (is_u_case(str) || is_l_case(str) || (('0' <= str) && (str <= '9')));
}

int		is_new_word(char *str, int i)
{
	if (is_alphanum(str[i]))
		if (is_alphanum(str[i - 1]))
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_new_word(str, i) && is_l_case(str[i]))
			str[i] -= 32;
		else if (!is_new_word(str, i) && is_u_case(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
