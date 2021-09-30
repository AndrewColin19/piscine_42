/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dashbord.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:27:48 by acolin            #+#    #+#             */
/*   Updated: 2021/09/30 09:49:32 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

void	ft_print_dashbord(char *filename)
{
	int		i;
	char	**tab;
	int		file_d;

	file_d = open(filename, O_RDONLY);
	tab = ft_split(ft_read_file(file_d), "\n");
	tab = ft_solve(tab, ft_tablen(tab), ft_char(tab[0]));
	i = 1;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	ft_free_tab(tab);
}

void	ft_print_dashbord_std(char **tab)
{
	int		i;

	tab = ft_solve(tab, ft_tablen(tab), ft_char(tab[0]));
	i = 1;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	ft_free_tab(tab);
}
