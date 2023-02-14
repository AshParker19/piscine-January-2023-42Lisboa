/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:17:42 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/29 14:18:08 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_chars(int x, char beg_char, char mid_char, char end_char)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(beg_char);
		else if (i <= (x - 1))
			ft_putchar(mid_char);
		else if (i == x)
			ft_putchar(end_char);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print_chars(x, 'A', 'B', 'C');
		else if (i <= (y - 1))
			ft_print_chars(x, 'B', ' ', 'B');
		else if (i == y)
			ft_print_chars(x, 'C', 'B', 'A');
		ft_putchar('\n');
		i++;
	}
}
