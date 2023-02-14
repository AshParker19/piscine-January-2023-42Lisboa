/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:33:42 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 14:13:11 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = -1;
	sorted = 1;
	while (++i < length - 1 && sorted)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		sorted = 0;
	}
	if (sorted != 1)
	{
		i = -1;
		while (++i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}
