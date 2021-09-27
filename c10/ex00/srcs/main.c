/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:52:20 by acolin            #+#    #+#             */
/*   Updated: 2021/09/23 16:14:09 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int reader;
	char buffer[1];
	
	reader = 0;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		reader = open(argv[1], O_RDONLY);
		while (read(reader, buffer, 1) != 0)
			ft_putchar(buffer[0]);
		close(reader);
	return (0);
}
