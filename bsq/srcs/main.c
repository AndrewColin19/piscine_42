/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:44:42 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 22:10:28 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

int	main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
		return (0);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_verif_file(argv[i]) == 0)
			{
				ft_print_dashbord(argv[i]);
			}
			i++;
		}
	}
}
