/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:20:01 by acolin            #+#    #+#             */
/*   Updated: 2021/09/19 15:25:15 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_cell.h"

int	compt_max(int cote)
{
	int compt;

	compt = 0;
	while (cote > 1)
	{
		compt += cote;
		cote--;
	}
	return (compt);
}

int	check_line(int **cells, int tab_size)
{
	int size;
	t_cell c;
	int test;
	int max;

	size = 4;
	set_cell(&c, 0, 0);
	max = compt_max(size);
	while (c.x < size)
	{
		test = 0;
		set_cell(&c, c.x, 0);
		while(c.y < size)
		{
			test += cells[c.x][c.y];
			if (test != max)
				return (0);
			set_cell(&c, c.x, c.y++);
		}
		set_cell(&c, c.x++, c.y);
	}
	return (1);
}

int	check_colonne(int **cells, int tab_size)
{
	int size;
	t_cell c;
	int test;
	int max;
	size = 4;

	set_cell(&c, 0, 0);
	max = compt_max(size);
	while (c.y < size)
	{
		test = 0;
		set_cell(&c, 0, c.y);
		while (c.x < size)
		{
			test += cells[c.x][c.y];
			if (test != max)
				return (0);
			set_cell(&c, c.x++, c.y);
		}
		set_cell(&c, c.x, c.y++);
	}
	return (1);
}
