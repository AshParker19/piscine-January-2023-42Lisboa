/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:40:27 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 10:57:01 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_comb(int n, char *nums);
int		ft_is_max(int n, int index, char *nums);
char	*ft_next_comb(int n, char *nums);
void	ft_print_next_comb(int n, char *nums);

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n >= 10 || n <= 0)
		return ;
	ft_first_comb(n, comb);
	ft_print_next_comb(n, comb);
}

void	ft_first_comb(int n, char *nums)
{
	int	i;

	i = -1;
	while (++i < n)
		nums[i] = i + '0';
}

int	ft_is_max(int n, int index, char *nums)
{
	return (nums[index] == '0' + index + 10 - n);
}

char	*ft_next_comb(int n, char *nums)
{
	int	i;
	int	temp;

	i = n - 1;
	while (i >= 0 && ft_is_max(n, i, nums))
		i--;
	temp = i;
	while (i >= 0 && i < n)
	{
		nums[i] = (i == temp) * (nums[i] + 1) + (i != temp) * (nums[i - 1] + 1);
		i++;
	}
	return (nums);
}

void	ft_print_next_comb(int n, char *nums)
{
	write(1, nums, n);
	if (!(nums[0] == '0' + 10 - n))
	{
		write(1, ", ", 2);
		ft_print_next_comb(n, ft_next_comb(n, nums));
	}
}
