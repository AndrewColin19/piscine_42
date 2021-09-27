/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:29:29 by acolin            #+#    #+#             */
/*   Updated: 2021/09/26 11:37:04 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	char_in_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (*(sep + i) != '\0')
	{
		if (*(sep + i) == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	nb_words;
	int	i;

	nb_words = 0;
	i = 0;
	while (*(str + i))
	{
		if (!char_in_sep(*(str + i), charset))
		{
			nb_words++;
			i++;
			while (!char_in_sep(*(str + i), charset) && *(str + i))
				i++;
		}
		else
			i++;
	}
	return (nb_words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		nb_words;
	char	**out;

	nb_words = count_words(str, charset);
	out = malloc((nb_words + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (k < nb_words)
	{
		while (char_in_sep(*(str + i), charset))
			i++;
		j = i;
		while (!char_in_sep(*(str + i), charset) && *(str + i) != '\0')
			i++;
		out[k] = malloc((i - j + 1) * sizeof(char));
		out[k] = ft_strncpy(out[k], str + j, i - j);
		while (char_in_sep(*(str + i), charset))
			i++;
		k++;
	}
	out[k] = 0;
	return (out);
}
