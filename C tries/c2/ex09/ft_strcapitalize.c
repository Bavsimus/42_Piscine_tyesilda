/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:51:47 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/03 09:31:32 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	char	c;
	int	space;

	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			space = 0;
		if (c >= '0' && c <= '9')
			space = 0;
		if (space == 1  && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

