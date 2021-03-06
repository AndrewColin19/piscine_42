/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:04:21 by acolin            #+#    #+#             */
/*   Updated: 2021/09/13 17:23:11 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	if (to_find[j] != '\0')
		return (0);
	else
		return (str + (i - j));
}
