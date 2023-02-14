/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:49:02 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/28 08:19:28 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = -1;
	num = 1;
	if (str[0] == '\0')
		return (num);
	while (str[++i])
	{
		if (! (str[i] >= '0' && str[i] <= '9'))
		num = 0;
	}
	return (num);
}
