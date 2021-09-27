/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:49:17 by acolin            #+#    #+#             */
/*   Updated: 2021/09/27 14:49:37 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define MAP_ER "map error\n"

int		ft_aff_error_dash(char *error);
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);

#endif
