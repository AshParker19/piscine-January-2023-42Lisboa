/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:43:18 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/02 07:50:30 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res *= ft_recursive_factorial(nb - 1);
	return (res);
}
