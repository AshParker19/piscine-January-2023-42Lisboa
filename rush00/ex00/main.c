/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:42 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/29 15:31:43 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	num = 1;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		num = 0;
		i++;
	}
	return (num);
}

int	ft_get_digit(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3 || !argv[1] || !argv[2])
		return (1);
	if (!ft_str_is_numeric(argv[1]) || !ft_str_is_numeric(argv[2]))
		return (1);
	x = ft_get_digit(argv[1]);
	y = ft_get_digit(argv[2]);
	if (x <= 0 || y <= 0)
		return (1);
	rush(x, y);
	return (0);
}
