/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:03:57 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/02 21:20:22 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_ft.c"

int main(void)
{
	int nbr = 12;

	ft_ft(&nbr);

	printf("%d", nbr);
}