/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:30:41 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 22:19:57 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		balade(int i, int j, char *s1, char *s2)
{
	if (s1[i] == 0)
		j = j - s2[i];
	else if (s2[i] == 0)
		j = j + s1[i];
	else
		j = s1[i] - s2[i];
	return (j);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		if (k < n - 1)
		{
			i++;
			k++;
		}
		else
			break ;
	}
	j = balade(i, j, s1, s2);
	return (j);
}
