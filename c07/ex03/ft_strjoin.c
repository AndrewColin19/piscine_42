/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:11:19 by acolin            #+#    #+#             */
/*   Updated: 2021/09/20 10:23:19 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	compt_str(int size, char **strs)
{
	int	compt;
	int	j;
	int	i;

	i = 0;
	compt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			compt++;
		}
		i++;
	}
	return (compt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strj;
	int		taille;

	i = 0;
	if (size <= 0)
		return (malloc(0));
	while (sep[i] != '\0')
		i++;
	taille = i * (size - 1);
	strj = malloc((sizeof(char) * (compt_str(size, strs) + i)) + 1);
	*strj = '\0';
	while (i < size)
	{
		ft_strcat(strj, strs[i]);
		if (i + 1 < size)
			ft_strcat(strj, sep);
		i++;
	}
	return (strj);
}
