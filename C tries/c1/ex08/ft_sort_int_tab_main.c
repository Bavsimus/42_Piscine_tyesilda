/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:50:33 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/02 22:15:15 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.c"
#include <stdio.h>

int main()
{
	int tab[6] = {3, 4, 5, 1, 2, 6};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
