/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 23:02:07 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/09 16:08:25 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	a = a + '0';
	write(1, &a, 1);
}

int		ft_is_negative(int a)
{
	if (a < 0 && a != -2147483648)
	{
		ft_putchar('-' - '0');
		a = -a;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int i;
	int a[10];

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		nb = ft_is_negative(nb);
		while (nb > 9)
		{
			a[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
		a[i] = nb;
		while (i >= 0)
		{
			ft_putchar(a[i]);
			i--;
		}
	}
}
