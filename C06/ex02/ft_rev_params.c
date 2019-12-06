/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:27:34 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/17 18:00:18 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (argc - 1 > 0)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
			i++;
		write(1, argv[argc - 1], i);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
