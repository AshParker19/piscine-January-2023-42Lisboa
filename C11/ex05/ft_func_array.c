/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:24:44 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/11 20:55:29 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hd.h"

int	ft_funcs(int t, int x, int y)
{
	int	(*f[5])(int x, int y);

	f[0] = ft_add;
	f[1] = ft_subtract;
	f[2] = ft_multiply;
	f[3] = ft_divide;
	f[4] = ft_module;
	if (t == 0)
		return ((*f[0])(x, y));
	else if (t == 1)
		return ((*f[1])(x, y));
	else if (t == 2)
		return ((*f[2])(x, y));
	else if (t == 3)
		return ((*f[3])(x, y));
	else if (t == 4)
		return ((*f[4])(x, y));
	else
		return (0);
}
