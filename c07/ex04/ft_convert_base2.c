/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:23:11 by acolin            #+#    #+#             */
/*   Updated: 2021/09/17 10:49:43 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	find_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	convert_base(char *str, char *base, int i, int size)
{
	int	j;
	int	num;

	j = 0;
	num = 0;
	while (base[j] != '\0')
	{
		if (str[i] == base[j])
		{
			j = -1;
			num *= size;
			num += find_nb(str[i], base);
			i++;
		}
		j++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	base_size;

	i = 0;
	neg = 1;
	base_size = base_len(base);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	return (convert_base(str, base, i, base_size) * neg);
}
