/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:36:08 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/20 16:42:04 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;
	int l;

	i = 1;
	result = 1;
	l = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (result);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
