/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:28:49 by acolin            #+#    #+#             */
/*   Updated: 2021/09/26 23:17:14 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define DICT "dicts/numbers.dict"

typedef struct s_val
{
	unsigned __int128	nb;
	char				*text;
}	t_val;

char				*ft_check_file(char *str);
int					ft_verif_line(char *str, int j);
void				ft_verif_tab(t_val *tab);
void				ft_aff_error_dict(char *str);
void				ft_aff_error(t_val *valeurs);
int					ft_strlen(char *str);
void				ft_sort_tab(t_val *tab);
int					ft_verif_nb(char *nb);
void				ft_delete_space(char **tab);
char				*ft_strdup(char *src);
void				free_valeurs(t_val *valeurs);
void				free_tab(char **tab);
char				**ft_tab(char *filename);
char				*str_fichier(char *filename);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				search(char *filename);
int					ft_solve(t_val *valeurs, int i, unsigned __int128 nb);
char				**ft_split(char *str, char *charset);
unsigned __int128	ft_atoi(char *nb);
int					start(char *nb, char *filename);

#endif
