/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:14:12 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/28 08:14:44 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	num;

	i = -1;
	num = 1;
	if (str[0] == 0)
		return (num);
	while (str[++i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			num = 0;
	}
	return (num);
}
