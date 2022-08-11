/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ierdemir <ierdemir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:07:32 by ierdemir          #+#    #+#             */
/*   Updated: 2022/07/23 21:55:46 by ierdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a);

void	ft_print(int lar, char d, char m, char f)
{
	int	j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_write(d);
		else
		{
			if (j == lar - 1)
				ft_write(f);
			else
				ft_write(m);
		}
		j++;
	}
	ft_write('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_print(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
		}
		i++;
	}
}
