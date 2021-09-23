#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '0';
	b = '1';
	c = '2';
	while (a < ('6' + 1))
	{
		while (b < ('7' + 1))
		{
			while (c < ('8' + 1))
			{
				ft_print(a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
	write(1, "789", 3);
}
