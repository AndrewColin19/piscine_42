/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:46:44 by acolin            #+#    #+#             */
/*   Updated: 2021/09/30 09:56:48 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/utils.h"

void	ft_free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}