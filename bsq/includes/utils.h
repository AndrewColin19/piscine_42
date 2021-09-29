/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:49:17 by acolin            #+#    #+#             */
/*   Updated: 2021/09/29 15:28:43 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define MAP_ER "map error\n"

typedef struct s_square
{
	int	size;
	int	x;
	int	y;
}	t_square;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	ft_del_nprint(char *str);
t_point	ft_set_point(int x, int y);
char	**ft_solve(char **tab, int size, char *c);
char	*ft_char(char *str);
int		ft_strlen(char *str);
int		ft_aff_error(char *error);
int		ft_verif_file(char *filename);
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);
int		ft_atoi(char *str);
int		ft_tablen(char **tab);
int		ft_tablen_char(char **tab);
char	*ft_read_file(int file_d, int size);
int		ft_count_file(int file_d);
void	ft_print_dashbord(char *filename);
void	ft_putchar(char c);

#endif
