/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 01:17:22 by bzalugas          #+#    #+#             */
/*   Updated: 2020/07/04 02:10:40 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int tmp;

	end = size - 1;
	start = 0;
	while (end > start)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		end--;
		start++;
	}
}
