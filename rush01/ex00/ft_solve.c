/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:55:09 by acolin            #+#    #+#             */
/*   Updated: 2021/09/19 17:15:10 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_cell.h"

void	ft_putchar(char c);
void	ft_affiche_error();
void	affiche_tab(int **cells, int a);
void	fill_cell(t_cell c, int **cells, int value);
void	vertical_fill(int increment, int index, int **cells, t_cell c);
void	horizontal_fill(int increment, int index, int **cells, t_cell c);

int	**creat_tab(int size)
{
	int	**cells;
	int	i;

	i = 0;
	cells = (int **)malloc(sizeof(int *) * size);
 	while (i < size)
	{
    	cells[i] = malloc(sizeof(int**) * size);
		i++;
		if (!cells)
			return (0);
	}
	return (cells);
}

void fill_tab(int **cells, t_cell c, int index, int signe, int direction)
{
	if (signe == 0  && direction == 0)
		vertical_fill(1, index, cells, c);
	else if (signe == 1 && direction == 0)
		vertical_fill(-1, index, cells, c);
	if (signe == 0  && direction == 1)
		horizontal_fill(1, index, cells, c);
	else if (signe == 1 && direction == 1)
		horizontal_fill(-1, index, cells, c);
}

void search_tab(int **cells, char *tab)
{
	int i;
	t_cell c;

	i = 0;
	c.x = 0;
	c.y = 0; 
	while (tab[i] != '\0')
	{
		if (tab[i] == '4')
		{
			if (i < 4)
				fill_tab(cells, c, i, 0, 0);
			else if (i < 8)
				fill_tab(cells, c, (i - 4), 1, 0);
			else if (i < 12)
				fill_tab(cells, c, (i - 8), 0, 1);
			else if (i > 12)
				fill_tab(cells, c, (i - 12), 1, 1);
		}
		if (tab[i] == '1')
		{
			if (i < 4)
				set_cell(&c, 0, i);
			else if (i < 8)
				set_cell(&c, 3, (i - 4));
			else if (i < 12)
				set_cell(&c, (i - 8), 0);
			else if (i > 12)
				set_cell(&c, (i - 12), 3);
			fill_cell(c, cells, 4);
		}
		i++;
	}
}

void	ft_complet_tab(int **cells)
{
	int i;
	int j;
	int l;

	i = 0;
	while (i < 4)
	{
		j = 0;
		l = 1;
		while (j < 4)
		{
			if (cells[i][j] == 0)
			{
				cells[i][j] = l;
				l++;
			}
			j++;
		}
		i++;
	}
}

int	ft_solve(char *tab)
{	
	int **cells;
	int i;

	cells = creat_tab(16);
	i = 0;
	while (tab[i])
	{
		/*if (tab[i] == tab[i + 4] && tab[i] != '2' && tab[i + 4] != '2')
			return (0);
		if (tab[i] == '4' && tab[i + 4] != '1')
			return (0);*/
		i++;
	}
	search_tab(cells, tab);
	ft_complet_tab(cells);
	affiche_tab(cells, 4);
	return (1);
}
