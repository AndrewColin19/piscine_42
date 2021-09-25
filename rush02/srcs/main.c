/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:02:58 by acolin            #+#    #+#             */
/*   Updated: 2021/09/25 16:26:29 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
		start(argv[1]);
	else if (argc == 3)
		return (0);
	else
		return (0);
}
