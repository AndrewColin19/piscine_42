/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:40:37 by acolin            #+#    #+#             */
/*   Updated: 2021/09/26 23:16:24 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

char	**ft_tab(char *filename)
{
	char	**tab;
	char	*str;

	str = str_fichier(filename);
	if (!str)
	{
		ft_aff_error_dict(str);
		return (0);
	}
	tab = ft_split(str, ":\n");
	ft_delete_space(tab);
	free(str);
	return (tab);
}

int	ft_verif_nb(char *nb)
{
	int	i;

	i = 0;
	if (ft_strlen(nb) >= 40)
		return (1);
	while (nb[i] == ' ')
		i++;
	while (nb[i] == '+' || nb[i] == '-')
		i++;
	if (nb[i] >= '0' && nb[i] <= '9')
		return (0);
	return (1);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_valeurs(t_val *valeurs)
{
	int	i;

	i = 0;
	while (valeurs[i].text != '\0')
	{
		if (valeurs[i].text)
			free(valeurs[i].text);
		i++;
	}
	free(valeurs);
}

void	ft_sort_tab(t_val *tab)
{
	int		i;
	int		j;
	t_val	temp;

	ft_verif_tab(tab);
	i = 0;
	while (tab[i].text)
	{
		j = i + 1;
		while (tab[j].text)
		{
			if (tab[i].nb < tab[j].nb)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
