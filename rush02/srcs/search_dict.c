/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:43:55 by acolin            #+#    #+#             */
/*   Updated: 2021/09/25 19:29:49 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char *str_fichier(char *filename)
{
	char *str;
	int file_d;
	char buffer[1];
	int count;

	count = 0;
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);
	while(read(file_d, buffer, 1))
		count++;
	close(file_d);
	str = malloc(sizeof(char) * count + 1);
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);
	read(file_d, str, count);
	close(file_d);
	return (str);
}

t_val *creat_tab()
{
	t_val *valeurs;
	char **tab;
	int i;
	int j;

	tab = ft_split(str_fichier(DICT), ": \n");
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (tab[i])
		i++;
	valeurs = malloc(sizeof(t_val) * (i / 2) + 1);
	i--;
	while (i > 0)
	{
		valeurs[j].text = tab[i];
		i--;
		valeurs[j].nb = ft_atoi(tab[i]);
		i--;
		j++;
	}
	valeurs[j].text = 0;
	return (valeurs);
}

int ft_solve(t_val *valeurs, int i, unsigned __int128 nb)
{
	if (valeurs[i].text == 0 || valeurs == 0)
		return (0);
	else if (valeurs[i].nb - nb == 0)
	{
		ft_putstr(valeurs[i].text);
		ft_putchar(' ');
		return (1);
	}
	else if (nb / valeurs[i].nb != 0)
	{
		ft_solve(valeurs, i + 1, nb / valeurs[i].nb);
		ft_putstr(valeurs[i].text);
		ft_putchar(' ');
		if (nb % valeurs[i].nb != 0)
			ft_solve(valeurs, i + 1, nb % valeurs[i].nb);
		return(1);
	}
	else
		return(ft_solve(valeurs, (i + 1), nb));
}

int start(char *nb)
{
	t_val *valeurs;
	int i;
	valeurs = creat_tab();
	i = 0;
	if (!valeurs)
		return (0);
	i = 0;
	ft_solve(valeurs, i, ft_atoi(nb));
	return (0);
}
