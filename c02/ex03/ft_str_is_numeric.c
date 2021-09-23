/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:59:00 by acolin            #+#    #+#             */
/*   Updated: 2021/09/11 13:01:55 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			res = 0;
			return (res);
		}
		i++;
	}
	return (res);
}