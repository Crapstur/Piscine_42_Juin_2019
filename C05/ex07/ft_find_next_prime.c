/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:43:18 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/20 22:14:33 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (l < nb && i < 46340)
	{
		l = i * i;
		i++;
	}
	return (i - 1);
}

int		ft_is_prime(int nb)
{
	int i;
	int sqrt;

	i = 3;
	sqrt = ft_sqrt(nb);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb <= 0)
		return (0);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb + 1) == 0)
			nb++;
	}
	return (nb + 1);
}
