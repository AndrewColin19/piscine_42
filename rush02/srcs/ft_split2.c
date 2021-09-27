/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:03:19 by acolin            #+#    #+#             */
/*   Updated: 2021/09/26 23:17:51 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

void	ft_delete_char(char *str, int pos)
{
	int	i;

	i = pos;
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
}

void	ft_delete_space(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			while (tab[i][0] == ' ')
				ft_delete_char(tab[i], 0);
			while (tab[i][j] == ' ' && !(tab[i][j + 1] >= 33
						&& tab[i][j + 1] <= 127))
			{
				ft_delete_char(tab[i], j);
			}
			j++;
		}
		i++;
	}
}

char	*ft_check_file(char *str)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = ft_verif_line(str, j);
		i++;
	}
	if (j == size)
	{
		return (str);
	}
	else
	{
		return (0);
	}
}

int	ft_verif_line(char *str, int j)
{
	int	i;

	i = j;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
		i++;
	while (str[i] >= 32 && str[i] <= 127 && i > j)
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}
