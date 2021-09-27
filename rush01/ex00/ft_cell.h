/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cell.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:29:06 by acolin            #+#    #+#             */
/*   Updated: 2021/09/19 10:58:01 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CELL_H
# define FT_CELL_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_cell;

void set_cell(t_cell *c, int x, int y);

#endif
