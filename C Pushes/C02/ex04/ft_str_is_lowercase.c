/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:51:22 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/03 14:08:05 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
