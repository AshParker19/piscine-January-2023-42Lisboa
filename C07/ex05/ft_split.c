/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshovah <anshovah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:31:06 by anshovah          #+#    #+#             */
/*   Updated: 2023/02/13 08:43:47 by anshovah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_sep(char c, char *str);
int		ft_count_strings(char *str, char *charset);
void	ft_strcpy(char *dest, char *src, int size);
void	ft_strings_content(char **split, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**split;

	count = ft_count_strings(str, charset);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (0);
	split[count] = 0;
	ft_strings_content(split, str, charset);
	return (split);
}

int	ft_is_sep(char c, char *seps)
{
	while (*seps)
	{
		if (c == *seps++)
			return (1);
	}
	return (0);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset))
		{
			i++;
			continue ;
		}
		count++;
		while (!ft_is_sep(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

void	ft_strcpy(char *dest, char *src, int size)
{
	int	i;

	i = -1;
	while (src[++i] && i < size - 1)
		dest[i] = src[i];
	dest[i] = 0;
}

void	ft_strings_content(char **split, char *str, char *charset)
{
	int	i;
	int	string_index;
	int	word_beginning_index;

	i = 0;
	string_index = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset))
		{
			i++;
			continue ;
		}
		word_beginning_index = i;
		while (!ft_is_sep(str[i], charset) && str[i])
			i++;
		split[string_index] = malloc(i - word_beginning_index + 1);
		ft_strcpy(split[string_index], str + word_beginning_index,
			i - word_beginning_index + 1);
		string_index++;
	}
}

// int main()
// {
//     char str[] = "Sierra!@@Hotel!$$India!$$Echo!#Lima!@@@Desta!@@SHIELD!";
//     char charset[] = "@#$";
//     int i = -1;
//     char **split;
//     split = ft_split(str, charset);
//     while(split[++i] != 0)
//         printf("[%d]: %s\n", i, split[i]);
// }