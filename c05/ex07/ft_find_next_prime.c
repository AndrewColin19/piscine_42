/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:51:40 by acolin            #+#    #+#             */
/*   Updated: 2021/09/16 09:58:50 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	test;

	if (nb < 2)
		nb = 2;
	i = nb;
	if (nb >= 2000000000)
		test = 2147483647;
	else
		test = 2 * nb;
	while (i < test)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
