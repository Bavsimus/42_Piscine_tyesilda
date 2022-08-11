/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:00:39 by tyesilda          #+#    #+#             */
/*   Updated: 2022/07/22 11:05:37 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nums;

	nums = '1';
	while (nums <= '9')
	{
		write (1, &nums, 1);
		nums++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
