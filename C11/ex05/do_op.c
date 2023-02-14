/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:54:11 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/12 10:39:36 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hd.h"

int		ft_check_sign(char *str);
int		ft_atoi(char *str);
int		ft_check_zero(char c, int y);
void	ft_print_result(int res);

int	main(int ac, char *av[])
{
	int	x;
	int	y;
	int	res;

	if (ac != 4 || !av[1] || !av[2] || !av[3] || !ft_check_sign(av[2]))
		return (0);
	x = ft_atoi(av[1]);
	y = ft_atoi(av[3]);
	if (!ft_check_zero(av[2][0], y))
		return (0);
	if (av[2][0] == '+')
		res = ft_funcs(0, x, y);
	else if (av[2][0] == '-')
		res = ft_funcs(1, x, y);
	else if (av[2][0] == '*')
		res = ft_funcs(2, x, y);
	else if (av[2][0] == '/')
		res = ft_funcs(3, x, y);
	else if (av[2][0] == '%')
		res = ft_funcs(4, x, y);
	else
		return (0);
	ft_print_result(res);
	write(1, "\n", 1);
}

int	ft_check_sign(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (str[0] == '+' || str[0] == '-' || str[0] == '*'
		|| str[0] == '/' || str[0] == '%')
		return (1);
	write(1, "0\n", 2);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	ft_check_zero(char c, int y)
{
	if (c == '/' && y == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}	
	else if (c == '%' && y == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

void	ft_print_result(int res)
{
	char	c;
	long	n;

	n = res;
	c = res + 48;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_print_result(n / 10);
		ft_print_result(n % 10);
	}
	else
		write(1, &c, 1);
}
