/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:17:04 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/23 14:40:19 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 1;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (tab == NULL)
		return (NULL);
	tab[0] = min;
	while (min < max)
	{
		tab[i] = min + 1;
		i++;
		min++;
	}
	return (tab);
}
