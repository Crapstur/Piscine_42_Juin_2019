/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:35:30 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/21 11:29:35 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tab1[size];
	int j;

	i = 0;
	j = size;
	while (size > 0)
	{
		*(tab1 + size - 1) = *(tab + i);
		size--;
		i++;
	}
	i = 0;
	while (i < j)
	{
		*(tab + i) = *(tab1 + i);
		i++;
		size--;
	}
}
