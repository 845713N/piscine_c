/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:30:55 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/16 15:00:11 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int diff;
	int i;

	i = 0;
	diff = 0;
	while (diff == 0 && (s1[i] || s2[i]))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (diff);
}

char	**sort_params(int argc, char **argv)
{
	int		i;
	char	*temp;
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i++;
	}
	return (argv);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], sizeof(str[i]));
		i++;
	}
	write(1, "\n", 1);
}

void	print_params(int argc, char **params)
{
	int i;

	i = 1;
	while (i < argc)
		ft_putstr(params[i++]);
}

int		main(int argc, char **argv)
{
	
}
