/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 08:34:17 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 10:56:43 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	m;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = i;
		while (++j <= '9')
		{
			m = j;
			while (++m <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &m, 1);
				if (i != '7')
					write(1, ", ", 2);
			}
		}
	}
}
