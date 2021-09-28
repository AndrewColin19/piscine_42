/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:33:26 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 21:56:33 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	*ft_char(char *str)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c = malloc(sizeof(char) * 4);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] >= 33 && str[i] <= 127)
	{
		if (str[i] != '\n')
		{
			c[j] = str[i];
			j++;
		}
		i++;
	}
	return (c);
}
