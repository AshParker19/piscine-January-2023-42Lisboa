/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:31:55 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/08 12:36:04 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;
	int				i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}