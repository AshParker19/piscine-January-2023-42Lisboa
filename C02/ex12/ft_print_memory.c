/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:28:14 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/14 12:35:52 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BASE "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_addr(unsigned long addr, int len)
{
	if (addr < 16)
	{
		while (--len > 0)
			ft_putchar('0');
		ft_putchar(BASE[addr]);
		return ;
	}
	ft_write_addr(addr / 16, len - 1);
	ft_putchar(BASE[addr % 16]);
}

void	ft_write_char_in_hex(unsigned char uc)
{
	ft_putchar(BASE[uc / 16]);
	ft_putchar(BASE[uc % 16]);
}

void	ft_print_content(char *str, int size)
{
	int	tmp;

	tmp = size - 1;
	while (++tmp < 16)
	{
		if (tmp % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
	}
	while (size--)
	{
		if ((unsigned char) *str < 32 || (unsigned char) *str >= 127)
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	index;

	if (!(size && addr))
		return (addr);
	ft_write_addr((unsigned long)addr, 16);
	ft_putchar(':');
	index = -1;
	while (++index < 16 && size)
	{
		if (index % 2 == 0)
			ft_putchar(' ');
		ft_write_char_in_hex((unsigned char)(((char *)addr)[index]));
		size--;
	}
	ft_putchar(' ');
	ft_print_content((char *)addr, index);
	if (size > 0)
	{
		ft_putchar('\n');
		ft_print_memory(addr + 16, size);
	}
	else
		ft_putchar('\n');
	return (addr);
}
