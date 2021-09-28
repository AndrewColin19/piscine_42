/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:11:05 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 22:23:34 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

void	ft_set_square(t_square *carre, int x, int y, int size)
{
	carre->size = size;
	carre->x = x;
	carre->y = y;
}

int	ft_check_increment(t_square carre, char **tab, char *c, t_point point)
{
	int	i;
	int	j;

	i = point.x;
	while (i < (point.x + carre.size))
	{
		j = point.y;
		while (j < (point.y + carre.size))
		{
			if (tab[i][j] == c[1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_square(t_square carre, char **tab, char *c)
{
	int	j;
	int	i;

	i = carre.x;
	while (i < carre.size + carre.x - 1)
	{
		j = carre.y;
		while (j < carre.size + carre.y - 1)
		{
			tab[i][j] = c[2];
			j++;
		}
		i++;
	}
}

int	ft_check_coor(int coor, t_square carre, int size)
{
	if (coor + carre.size < size)
		coor++;
	else
		coor += carre.size;
	return (coor);
}

char	**ft_solve(char **tab, int size, char *c)
{
	int			i;
	int			j;
	int			sizel;
	t_square	carre;

	i = 0;
	j = 0;
	sizel = ft_strlen(tab[1]);
	ft_set_square(&carre, 1, 0, 0);
	while (i < size)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (ft_check_increment(carre, tab, c, ft_set_point(carre.x, carre.y)))
				ft_set_square(&carre, carre.x, carre.y, (carre.size + 1));
			else if (ft_check_increment(carre, tab, c, ft_set_point(i, j)))
				ft_set_square(&carre, i, j, (carre.size + 1));
			j = ft_check_coor(j, carre, sizel);
		}
		i = ft_check_coor(i, carre, size);
	}
	ft_print_square(carre, tab, c);
	return (tab);
}