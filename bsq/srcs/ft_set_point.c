/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:14:33 by acolin            #+#    #+#             */
/*   Updated: 2021/09/28 22:16:58 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

t_point	ft_set_point(int x, int y, int size, int sizel)
{
	t_point point;

	point.x = x;
	point.y = y;
	point.size = size;
	point.sizel = sizel;
	return (point);
}
