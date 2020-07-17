/* ************************************************************************** */
/*																			  */
/*														:::	  ::::::::        */
/*   ft_atoi.c										  :+:	  :+:	:+:       */
/*													+:+ +:+		 +:+	      */
/*   By: bzalugas <bzalugas@student.42.fr>		  +#+  +:+	   +#+		      */
/*												+#+#+#+#+#+   +#+		      */
/*   Created: 2020/07/09 11:04:38 by bzalugas		  #+#	#+#			      */
/*   Updated: 2020/07/14 13:43:58 by bzalugas         ###   ########.fr       */
/*																			  */
/* ************************************************************************** */
#include <stdio.h>
int	strlen_nb(char *str)
{
	int i;
	unsigned int power;

	power = 1;
	i = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		power *= 10;
		i++;
	}
	return (power);
}

int	ft_atoi(char *str)
{
	int			i;
	unsigned int	nb;
	int			sign;
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

int	main()
{
	char str[] = "0";
	printf("%d", ft_atoi(str));
	return 0;
}
