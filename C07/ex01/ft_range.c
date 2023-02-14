/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:12:13 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 07:34:15 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*values;
	int	i;
	int	j;
	int	range;

	i = min;
	j = 0;
	range = max - min;
	values = (int *)malloc(sizeof(int) * range);
	if (min >= max || !values)
		return (0);
	while (i < max)
	{
		values[j] = min + j;
		i++;
		j++;
	}
	return (values);
}
