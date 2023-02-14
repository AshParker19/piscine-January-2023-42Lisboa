/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:32:12 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/02 08:39:25 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;
	long int	num;

	i = 0;
	num = nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= num)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
