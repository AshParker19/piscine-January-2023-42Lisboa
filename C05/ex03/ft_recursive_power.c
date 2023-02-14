/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:58:44 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/02 08:09:02 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		res *= ft_recursive_power(nb, power - 1);
	return (res);
}
