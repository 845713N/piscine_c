/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:28:50 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/15 14:16:50 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;

	if (nb < 0)
		return (0);
	n = nb;
	if (nb == 0)
		nb = 1;
	while (n > 1)
	{
		nb *= n - 1;
		n--;
	}
	return (nb);
}
