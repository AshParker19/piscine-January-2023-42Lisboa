/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:56:48 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/28 08:14:11 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	num;

	i = -1;
	num = 1;
	if (str[0] == '\0')
		return (num);
	while (str[++i])
	{
		if (! (str[i] >= 'a' && str[i] <= 'z'))
			num = 0;
	}
	return (num);
}
