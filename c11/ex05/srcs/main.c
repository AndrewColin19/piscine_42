/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:42:07 by acolin            #+#    #+#             */
/*   Updated: 2021/09/23 12:23:36 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	char_to_char(char *t)
{
	int	i;

	i = 0;
	while (t[i] != '\0')
		i++;
	if (i < 2)
		return (t[0]);
	else
		return (' ');
}

int	main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
		return (0);
	else
		operation(ft_atoi(argv[1]), ft_atoi(argv[3]), char_to_char(argv[2]));
	ft_putchar('\n');
}
