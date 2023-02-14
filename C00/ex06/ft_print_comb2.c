/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 08:45:44 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 10:56:50 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int i, int j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 99)
	{
		j = i;
		while (++j <= 99)
			ft_print_comb(i, j);
	}
}
