/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:33:21 by acolin            #+#    #+#             */
/*   Updated: 2021/09/26 22:40:18 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	ft_aff_error(t_val *valeurs)
{
	ft_putstr("error\n");
	free_valeurs(valeurs);
}

void	ft_aff_error_dict(char *str)
{
	ft_putstr("Dict Error\n");
	free(str);
}

void	ft_verif_tab(t_val *tab)
{
	int	i;

	i = 0;
	while (tab[i].text != 0)
	{
		if (tab[i].nb % 10 != 0 && tab[i].nb > 19)
		{
			tab[i].nb = 0;
			free(tab[i].text);
			tab[i].text = ft_strdup("zero");
		}
		i++;
	}
}
