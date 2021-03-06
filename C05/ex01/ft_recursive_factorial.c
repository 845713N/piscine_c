/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:50:28 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/16 15:51:33 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
