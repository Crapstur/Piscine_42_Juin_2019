/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 20:47:59 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/09 00:02:18 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putint(int a)
{
	int b;

	if (a <= 9)
	{
		a = a + '0';
		ft_putchar(a);
	}
	else
	{
		b = a / 10 + '0';
		a = a % 10 + '0';
		ft_putchar(b);
		ft_putchar(a);
	}
}

void	ft_putchar1(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	ft_putint(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
	}
	ft_putint(b);
}

void	ft_putspace(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar1(a, b);
			if (a != 98)
			{
				ft_putspace(',', ' ');
			}
			b++;
		}
		a++;
	}
}
