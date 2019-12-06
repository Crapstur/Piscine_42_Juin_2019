/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 01:22:48 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/18 13:49:45 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != 0 && *(s2 + i) != 0 && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_print_tab(char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (*(*(argv + i) + j) != 0)
			j++;
		write(1, *(argv + i), j);
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}

void	swap_string(char **s1, char **s2)
{
	char *stock;

	stock = *s1;
	*s1 = *s2;
	*s2 = stock;
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < (argc - 2))
	{
		i = 1;
		while (i < (argc - 1))
		{
			k = ft_strcmp(*(argv + i), *(argv + i + 1));
			if (k > 0)
			{
				swap_string(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j++;
	}
	i = 0;
	ft_print_tab(argv, argc);
	return (0);
}
