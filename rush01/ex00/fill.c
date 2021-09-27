/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:58:22 by acolin            #+#    #+#             */
/*   Updated: 2021/09/19 10:20:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cell.h"

void	affiche_tab(int **cellllls, int g);

void	vertical_fill(int increment, int index, int **cells, t_cell c)
{
	int i;

	i = 1;
	c.y = index;
	if (increment < 0)
		c.x = 3;
	else
		c.x = 0;
	while (i <= 4)
	{
		cells[c.x][c.y] = i;
		c.x += increment;
		i++;
	}
}

void	horizontal_fill(int increment, int index, int **cells, t_cell c)
{
	int i;

	i = 1;
	c.x = index;
	if (increment < 0)
		c.y = 3;
	else
		c.y = 0;
	while (i <= 4)
	{
		cells[c.x][c.y] = i;
		c.y += increment;
		i++;
	}
}

void	fill_cell(t_cell c, int **cells, int value)
{
	cells[c.x][c.y] = value;
}
