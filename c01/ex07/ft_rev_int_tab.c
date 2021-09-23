/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:12:04 by acolin            #+#    #+#             */
/*   Updated: 2021/09/09 18:14:34 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	b;

	i = 0;
	b = size - 1;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[b];
		tab[b] = a;
		b--;
		i++;
	}
}