/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:24:34 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/08 23:50:33 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putspace(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	treatment(char tab[], int i, int n)
{
	tab[i - 1] = tab[i - 1] + 1;
	tab[i] = tab[i - 1] + 1;
	while (i < n - 1)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_putlast(char tab[], int n, int aff)
{
	n--;
	while (tab[n] <= '9')
	{
		write(1, tab, n + 1);
		if (n == 0 && tab[n] == 9 + '0')
		{
			aff = 1;
		}
		if (aff != 1)
		{
			ft_putspace(',', ' ');
		}
		tab[n] = tab[n] + 1;
	}
}

void	ft_change(char tab[], int n)
{
	int i;
	int aff;

	aff = 0;
	i = n - 1;
	while (i >= 0)
	{
		i = n - 1;
		if (tab[0] == 10 - n + '0')
		{
			aff = 1;
		}
		ft_putlast(tab, n, aff);
		while (tab[i - 1] == tab[i] - 1)
		{
			i--;
		}
		if (i == 0)
		{
			break ;
		}
		treatment(tab, i, n);
	}
}

void	ft_print_combn(int n)
{
	char	tab[n];
	int		i;

	i = n - 1;
	while (i >= 0)
	{
		tab[i] = i + '0';
		i--;
	}
	ft_change(tab, n);
}
