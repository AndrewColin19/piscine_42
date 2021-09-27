/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:52:19 by acolin            #+#    #+#             */
/*   Updated: 2021/09/27 15:22:58 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

char	*ft_read_file(int file_d, int size)
{
	char *str;

	str = malloc(sizeof(char) * size + 1);
	read(file_d, str, size);
	str[size + 1] = '\0';
	return (str);
}

int	verif_line(char *str, int size)
{
	int j;
	int i;
	int nb;
	int size_line;

	i = 0;
	j = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		while (str[j] >= '0' && str[j] <= '9')
			j++;
		while (str[j] >= 33 && str[j] <= 127 && nb < 3)
			j++; nb++;
		i++;
	}
	if (j == size)
		return (0);
	return (1);
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
	return (cb);
}

char	*ft_verif_file(char *filename)
{
	int file_d;
	int size;
	char *str;

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (ft_aff_error_dash(MAP_ER));
	return (0);
	size = ft_count_file(file_d);
	if (size < 0)
		return (0);
	str = ft_read_file(file_d, size);
	if (verif_line(str, size))
		return (0);
	return (str);
}
