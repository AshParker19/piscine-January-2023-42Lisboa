/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:38:42 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/02 07:51:12 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (--nb > 0)
		res *= nb;
	return (res);
}
