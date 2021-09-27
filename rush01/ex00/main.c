/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:52:49 by acolin            #+#    #+#             */
/*   Updated: 2021/09/19 15:28:20 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void ft_affiche_error();
int ft_solve(char *tab);

char	*tab_arg(char *arg)
{
	int i;
	int j;
	char *tab;
	
	i = 0;
	j = 0;
	tab = (char *)malloc(sizeof(char) * 17);
	while (i < 16)
	{
		tab[i] = arg[j];
		j += 2;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	main(int argc, char *argv[])
{
	if (argc > 2 || argc == 1)
		ft_affiche_error();
	else
	{
		ft_solve(tab_arg(argv[1]));
	}
	return (0);
} 
