/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:30:40 by acolin            #+#    #+#             */
/*   Updated: 2021/09/30 09:27:17 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	ft_stdin(void)
{
	char	buffer[30000];
	char	*str;
	char	**tab;
	int		i;

	if (read(0, buffer, 30000) < 1)
		return (ft_aff_error(MAP_ER));
	i = 0;
	while (buffer[i] != '\0')
		i++;
	str = malloc(i + 1);
	i = 0;
	while (buffer[i] != '\0')
	{
		str[i] = buffer[i];
		i++;
	}
	str[i] = '\0';
	tab = ft_split(str, "\n");
	if (verif_line(tab) == 0)
		ft_print_dashbord_std(tab);
	else
		return (ft_aff_error(MAP_ER));
	return (0);
}
