/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 09:43:32 by acolin            #+#    #+#             */
/*   Updated: 2021/09/11 11:22:38 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_condi(int longeur, int x, int hauteur, int y);

void	rush(int x, int y)
{
	int	longeur;
	int	hauteur;

	hauteur = 1;
	while (hauteur < (y + 1))
	{	
		longeur = 1;
		while (longeur < (x + 1))
		{
			ft_condi(longeur, x, hauteur, y);
			longeur++;
		}
		ft_putchar('\n');
		hauteur++;
	}
}

void	ft_condi(int longeur, int x, int hauteur, int y)
{
	int	test;

	test = 0;
	if ((longeur == 1 || longeur == x) && (hauteur == y
			|| 1 == hauteur))
	{
		ft_putchar('o');
	}
	else if (hauteur == 1 || hauteur == y)
	{
		ft_putchar('-');
	}
	else if (longeur > 1 && longeur < x && hauteur > 1 && hauteur < y)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('|');
	}
}
