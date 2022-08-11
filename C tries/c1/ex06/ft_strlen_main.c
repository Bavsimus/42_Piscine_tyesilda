/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyesilda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:29:30 by tyesilda          #+#    #+#             */
/*   Updated: 2022/08/02 21:55:22 by tyesilda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

int main()
{
	int len;
	char c[] = "Hello";
	len = ft_strlen(c);
	printf("%d", len);
}
