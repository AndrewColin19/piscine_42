/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:28:49 by acolin            #+#    #+#             */
/*   Updated: 2021/09/25 18:03:30 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define DICT "numbers.dict"

typedef struct s_val
{
	unsigned __int128 nb;
	char *text;
}	t_val;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	search(char *filename);
int	ft_solve(t_val *valeurs, int i, unsigned __int128 nb);
char	**ft_split(char *str, char *charset);
unsigned __int128	ft_atoi(char *nb);
int	start(char *nb);

#endif
