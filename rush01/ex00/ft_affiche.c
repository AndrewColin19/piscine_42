/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:59:16 by acolin            #+#    #+#             */
/*   Updated: 2021/09/18 19:54:37 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void affiche_tab(int **cells, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while(j < size)
		{
			ft_putchar((cells[i][j] + '0'));
			if (j < size - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_affiche_error()
{
	ft_putstr("Error\n");
}
