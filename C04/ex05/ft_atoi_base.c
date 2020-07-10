/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:11:39 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/10 11:11:42 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
	i++;
    return (i);
}

int	is_valid(char *base, int len_base)
{
    int i;
    
    i = 0;
    if (len_base > 1)
	{
	    while (i < len_base - 1)
		{
		    if (base [i] == base[i + 1] || base[i] == '+' || base[i] == '-')
			return (0);
		    i++;
		}
	    return (1);
	}
    else
	return (0);
}

int    ft_atoi(char *str)
{
	int				i;
	unsigned int	nb;
	int				sign;
	unsigned int	power;

	i = 0;
	nb = 0;
	sign = 1;
	power = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	power = strlen_nb(&str[i]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += (str[i] - '0') * power;
		power /= 10;
		i++;
	}
	return (nb * sign);
}

char	*putnbr_base(int nbr, char *base)
{
	int	i;
	int	len_base;
	char	*str_nb;

	len_base = ft_strlen(base);
	i = 0;
	if (is_valid(base, len_base))
	{
		if (nbr < 0)
		{
		    nbr *= -1;
		}
		if (nbr > len_base)
			str_nb(nbr / len_base, base);
		ft_putchar(base[nbr % len_base]);
	}
}

int	ft_atoi_base(char *str, char *base)
{
    int		i;
    int		nb;
    char	*str_nb;

    if (is_valid(base))
	{
	    nb = ft_atoi(str);
	}
    
}
