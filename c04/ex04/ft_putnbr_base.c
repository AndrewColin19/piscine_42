/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:10:07 by acolin            #+#    #+#             */
/*   Updated: 2021/09/15 10:40:06 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' && base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{	
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	i;
	int	res[100];

	i = 0;
	size = 0;
	if (check_base(base) == 1)
	{
		if (nbr < 1)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size] != '\0')
			size++;
		while (nbr >= 1)
		{
			res[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[res[i]]);
	}
}

int main()
{
	 ft_putnbr_base(20, "poneyvif");
}
