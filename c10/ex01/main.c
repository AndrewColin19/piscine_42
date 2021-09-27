/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:22:04 by acolin            #+#    #+#             */
/*   Updated: 2021/09/24 12:53:31 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

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

int	ft_puterror(char *name, char *namefile, char *error)
{
	ft_putstr(name);
	ft_putchar(':');
	ft_putchar(' ');
	ft_putstr(namefile);
	ft_putchar(':');
	ft_putchar(' ');
	ft_putstr(error);
	return (0);
}

int ft_read(int file_d, char *buffer, char *exec, char *filename)
{
	int reader;

	reader = read(file_d, buffer, 1);
	if (reader < 0)
	{
		ft_puterror(exec, filename, strerror(errno));
		return (0);
	}
	while (reader != 0)
	{
		ft_putchar(buffer[0]);
		reader = read(file_d, buffer, 1);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int file_d;
	char buffer[1];
	int i;

	file_d = 0;
	i = 1;
	if (argc < 1)
		return (0);
	else
	{
		while (i < argc)
		{
			file_d = open(argv[i], O_RDONLY);
			if (file_d < 0)
			{
				ft_puterror(basename(argv[0]), argv[i], strerror(errno));
				ft_putchar('\n');
			}
			else
			{
				ft_read(file_d, buffer, basename(argv[0]), argv[i]);
				close(file_d);
				ft_putchar('\n');
			}
			i++;
		}
	}
}
