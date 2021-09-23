/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:11:52 by acolin            #+#    #+#             */
/*   Updated: 2021/09/22 10:34:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_retour;

	tab_retour = malloc(sizeof(int) * length);
	if (!(tab_retour))
		return (0);
	i = 0;
	while (i < length)
	{
		tab_retour[i] = f(tab[i]);
		i++;
	}
	return (tab_retour);
}
