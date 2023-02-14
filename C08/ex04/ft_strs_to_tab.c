/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:44:18 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/07 14:42:48 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_l;
	int		i;
	char	*dest;

	src_l = ft_strlen(src);
	i = -1;
	dest = (char *)malloc(src_l + 1);
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = -1;
	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
	}
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}
