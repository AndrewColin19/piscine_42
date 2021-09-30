/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:56:30 by acolin            #+#    #+#             */
/*   Updated: 2021/09/16 13:16:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src_new;
	int		size;
	int		i;

	size = 0;
	while (src[size] != '\0')
		size++;
	src_new = malloc(size + 1);
	i = 0;
	while (src[i] != '\0')
	{
		src_new[i] = src[i];
		i++;
	}
	src_new[i] = '\0';
	return (src_new);
}
