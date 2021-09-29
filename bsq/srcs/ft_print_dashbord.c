/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dashbord.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:27:48 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 22:08:33 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	**ft_read_dashbord(char *filename)
{
	int		file_d;
	int		size;
	char	*str;

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);
	size = ft_count_file(file_d);
	str = ft_read_file(open(filename, O_RDONLY), size);
	return (ft_split(str, "\n"));
}

void	ft_print_dashbord(char *filename)
{
	int		i;
	char	**tab;

	tab = ft_read_dashbord(filename);
	tab = ft_solve(tab, ft_tablen(tab), ft_char(tab[0]));
	i = 1;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
