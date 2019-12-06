/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 21:38:33 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/20 12:17:31 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *base)
{
	if (base == '\0')
		return (0);
	else if (base[i] != + || base[i] != +)
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		while (base[i] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_taille_base(char *base)
{
	int i;
	
	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		ft_div_nb(int nb, int taille_base, int *dest)
{
	int i;
	int nb2;

	i = 0;
	nb2 = nb;
	while (...)
	{
		dest[i] = nb2 % taille_base;
		nb2 = nb2 / taille_base;
		i++;
	}
	return (dest);
}

int		ft_rev_dest(dest)
{
	int i;
	int tmp[100];

	i = 0;
	j = 0;
	k = 0;
	while (j != '\0')
		j++;
	k = j;
	while (dest[i] != '\0')
	{
		tmp[i] = dest[j];
		i++;
		j--;
	}
	i = 0;
	while (i < k)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int check;
	int taille_base;
	int dest[100];

	check = ft_check_base;
	if (check == 0)
		return (0);
	taille_base = ft_taille_base(base);
	dest = ft_div_nb(nb, taille_base, dest);
	dest = ft_rev_dest(dest);

}
