/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:00:26 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/19 16:30:59 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (l < nb && i <= 46340)
	{
		l = i * i;
		i++;
	}
	return (i - 1);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 1 || nb == 0)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
