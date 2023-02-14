/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:08:25 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 12:48:17 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find(long int nb)
{
	long int	div;

	div = 2;
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (1);
		div++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	long int	n;
	int			primer;

	n = nb;
	if (n <= 2)
		return (2);
	primer = 1;
	while (primer)
	{
		primer = ft_find(n);
		if (primer == 0)
			return (n);
		n++;
	}
	return (0);
}
