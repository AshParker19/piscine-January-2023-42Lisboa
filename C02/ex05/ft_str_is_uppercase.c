/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:04:22 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/28 08:19:08 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	num;

	i = -1;
	num = 1;
	if (str[0] == 0)
		return (num);
	while (str[++i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			num = 0;
	}
	return (num);
}
