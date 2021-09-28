/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:28:06 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 21:57:34 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_tablen_char(char **tab)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}
