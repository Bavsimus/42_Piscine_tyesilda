/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:50:14 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/02 22:19:17 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;
	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
				if (tab[i] > tab[i + 1])
				{
					swap = tab[i];
					tab[i] = tab[i + 1];
					tab[i + 1] = swap;
				}
				i++;
		}
		size--;
	}
}

