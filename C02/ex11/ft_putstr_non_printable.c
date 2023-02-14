/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:20:35 by anshovah          #+#    #+#             */
/*   Updated: 2023/01/29 07:31:32 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_hex(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar(HEX[c / 16]);
	ft_putchar(HEX[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	if (!*str)
		return ;
	if ((unsigned char) *str < 32 || (unsigned char) *str >= 127)
		ft_write_hex((unsigned char) *str);
	else
		ft_putchar(*str);
	ft_putstr_non_printable(str + 1);
}
