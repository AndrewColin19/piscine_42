/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:52:19 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 17:01:58 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	*ft_read_file(int file_d, int size)
{
	char	*str;
	int		reader;

	str = malloc(sizeof(char) * size + 1);
	reader = read(file_d, str, size);
	if (reader < 0)
		return (0);
	close(file_d);
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
	if (ft_check_char_line(str[i], str[0]))
		return (1);
	size = ft_strlen(str[i]);
	i++;
	while (str[i] != '\0')
	{
		if (ft_strlen(str[i]) != size || ft_check_char_line(str[i], str[0]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_file(int file_d)
{
	int		reader;
	int		cb;
	char	buffer[1];

	cb = 0;
	reader = read(file_d, buffer, 1);
	if (reader < 0)
		return (-1);
	cb++;
	while (reader)
	{
		reader = read(file_d, buffer, 1);
		cb++;
	}
	close(file_d);
	return (cb);
}

int	ft_verif_file(char *filename)
{
	int		file_d;
	int		size;
	char	*str;
	char	**tab;

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (ft_aff_error(MAP_ER));
	size = ft_count_file(file_d);
	if (size < 0)
		return (ft_aff_error(MAP_ER));
	str = ft_read_file(open(filename, O_RDONLY), size);
	tab = ft_split(str, "\n");
	if (verif_line(tab))
	{
		free(str);
		return (ft_aff_error(MAP_ER));
	}
	if ((ft_tablen(tab) - 1) != ft_atoi(tab[0]))
		return (ft_aff_error(MAP_ER));
	return (0);
}
