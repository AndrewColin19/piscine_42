/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:40:41 by acolin            #+#    #+#             */
/*   Updated: 2021/09/17 11:29:46 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int ft_atoi_base(char *str, char *base);

char	*ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	i;
	int	j;
	int	res[100];
	char	*retour;

	i = 0;
	j = 0;
	size = 0;
	if (nbr < 1)
	{
		nbr = -nbr;
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
	{
		retour[j] = base[res[i]];
		j++;
	}
	printf("%s\n", retour);
	return (retour);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int a;

	a = 0;
	if (check_base(base_from) && check_base(base_to))
	{
		a = ft_atoi_base(nbr, base_from);
		return(ft_putnbr_base(a, base_to));	
	}
	return ("");
}

int main()
{
	char *a;
	a = ft_convert_base("-1010", "01", "0123456789ABCDEF");
	printf("%s\n", a);
}
