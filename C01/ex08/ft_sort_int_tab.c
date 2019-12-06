/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 19:38:33 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/09 21:08:02 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;
	int j;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				a = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = a;
			}
			i++;
		}
		j++;
		i = 0;
	}
}
