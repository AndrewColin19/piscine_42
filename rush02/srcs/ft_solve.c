/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:43:55 by acolin            #+#    #+#             */
/*   Updated: 2021/09/27 16:05:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

int	count_file_size(char *filename, int count)
{
	int		file_d;
	int		reader;
	char	buffer[1];

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	reader = read(file_d, buffer, 1);
	if (reader < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	count++;
	while (reader)
	{
		reader = read(file_d, buffer, 1);
		count++;
	}
	close(file_d);
	return (count);
}

char	*str_fichier(char *filename)
{
	char	*str;
	int		file_d;
	int		count;
	int		reader;

	count = 0;
	count = count_file_size(filename, count);
	if (count == 0)
		return (0);
	str = malloc(sizeof(char) * count + 1);
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
	{
		ft_aff_error_dict(str);
		return (0);
	}
	reader = read(file_d, str, count);
	if (reader < 0)
	{
		ft_aff_error_dict(str);
		return (0);
	}
	close(file_d);
	return (ft_check_file(str));
}

t_val	*creat_tab(char *filename)
{
	t_val	*valeurs;
	char	**tab;
	int		i;
	int		j;

	tab = ft_tab(filename);
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	valeurs = malloc(sizeof(t_val) * (i / 2) + 1);
	i--;
	while (i > 0)
	{
		valeurs[j].text = ft_strdup(tab[i]);
		i--;
		valeurs[j].nb = ft_atoi(tab[i]);
		i--;
		j++;
	}
	valeurs[j].text = 0;
	free_tab(tab);
	return (valeurs);
}

int	ft_solve(t_val *valeurs, int i, unsigned __int128 nb)
{
	if (valeurs[i].text == 0 || valeurs == 0)
		return (0);
	else if (nb < 100 && valeurs[i].nb - nb == 0)
	{
		ft_putstr(valeurs[i].text);
		return (1);
	}
	else if (nb / valeurs[i].nb != 0)
	{
		if (nb >= 100)
			ft_solve(valeurs, i + 1, nb / valeurs[i].nb);
		if (nb >= 100)
			ft_putchar(' ');
		ft_putstr(valeurs[i].text);
		if (nb % valeurs[i].nb != 0)
			ft_putchar(' ');
		if (nb % valeurs[i].nb != 0)
			ft_solve(valeurs, i + 1, nb % valeurs[i].nb);
		return (1);
	}
	else
		return (ft_solve(valeurs, (i + 1), nb));
}

int	start(char *nb, char *filename)
{
	t_val					*valeurs;
	int						i;
	__int128				nbs;

	valeurs = creat_tab(filename);
	if (!valeurs)
		return (0);
	ft_sort_tab(valeurs);
	i = 0;
	if (ft_verif_nb(nb))
	{
		ft_aff_error(valeurs);
		return (0);
	}
	nbs = ft_atoi(nb);
	if (nbs < 0)
	{
		ft_aff_error(valeurs);
		return (0);
	}
	ft_solve(valeurs, i, ft_atoi(nb));
	free_valeurs(valeurs);
	ft_putchar('\n');
	return (0);
}
