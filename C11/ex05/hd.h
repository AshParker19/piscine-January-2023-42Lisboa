/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hd.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:48:59 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/12 10:09:22 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HD_H
# define HD_H

# include <unistd.h>
# include <stdio.h>

int		ft_add(int x, int y);
int		ft_subtract(int x, int y);
int		ft_multiply(int x, int y);
int		ft_divide(int x, int y);
int		ft_module(int x, int y);

int		ft_funcs(int t, int x, int y);
int		ft_check_sign(char *str);
int		ft_atoi(char *str);
int		ft_check_zero(char c, int y);
void	ft_print_result(int res);

#endif