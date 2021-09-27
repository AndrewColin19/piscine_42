/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:43:15 by acolin            #+#    #+#             */
/*   Updated: 2021/09/27 10:59:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_aff_error_dash(char *error)
{
	ft_putstr(error);
	return (0);
}
