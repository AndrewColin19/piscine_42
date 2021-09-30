/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:52:19 by acolin            #+#    #+#             */
/*   Updated: 2021/09/30 10:21:04 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	*ft_read_file(int file_d)
{
	char	*str;
	char	buffer[30000];
	int		i;

	i = 0;
	if (read(file_d, buffer, 30000) < 1)
		return (0);
	while (buffer[i] != '\0')
		i++;
	str = malloc(i + 1);
	i = 0;
	while (buffer[i] != '\0')
	{
		str[i] = buffer[i];
		i++;
	}
	close(file_d);
	str[i] = '\0';
	return (str);
}

int	ft_check_char_line(char *line, char *fline)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (fline[i] != '\0')
	{
		if (fline[i] >= '0' && fline[i] <= '9')
			j++;
		i++;
	}
	if (j != i - 3)
		return (1);
	if (fline[j] == fline[j + 1] || fline[j] == fline[j + 2]
		|| fline[j + 1] == fline[j + 2])
		return (1);
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] != fline[j] && line[i] != fline[j + 1]
			&& line[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

int	verif_line(char **str)
{
	int	i;
	int	size;

	size = 0;
	i = 1;
	if (ft_tablen(str) < 2)
		return (1);
	if (ft_check_char_line(str[i], str[0]))
		return (1);
	size = ft_strlen(str[i]);
	if (size < 1)
		return (1);
	i++;
	while (str[i] != '\0')
	{
		if (ft_strlen(str[i]) != size || ft_check_char_line(str[i], str[0]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_verif_file(char *filename)
{
	int		file_d;
	char	*str;
	char	**tab;

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (ft_aff_error(MAP_ER));
	str = ft_read_file(open(filename, O_RDONLY));
	if (!str)
	{
		free(str);
		return (ft_aff_error(MAP_ER));
	}
	tab = ft_split(str, "\n");
	if (verif_line(tab))
	{
		free(str);
		return (ft_aff_error(MAP_ER));
	}
	if ((ft_tablen(tab) - 1) != ft_atoi(tab[0]))
		return (ft_aff_error(MAP_ER));
	free(str);
	ft_free_tab(tab);
	return (0);
}
