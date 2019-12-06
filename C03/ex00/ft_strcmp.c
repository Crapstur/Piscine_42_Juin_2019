/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:36:27 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 17:50:38 by rcapouil         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	j = balade(i, j, s1, s2);
	return (j);
}
