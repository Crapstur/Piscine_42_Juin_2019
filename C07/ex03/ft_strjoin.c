/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:25:41 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/22 19:07:58 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_l_sep(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int		ft_l_total(char **strs)
{
	int i;
	int j;
	int l_total;

	i = 0;
	j = 0;
	l_total = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		l_total += j;
		i++;
	}
	return (l_total);
}

char	ft_copy(char **strs, char *sep, char *dest, int size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		if (i < (size - 1))
			while (sep[j] != '\0')
				dest[k++] = sep[j++];
		i++;
	}
	dest[k] = '\0';
	return (*dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l_total;
	int		l_sep;
	char	*dest;

	l_total = ft_l_total(strs);
	l_sep = ft_l_sep(sep);
	if (size == 0)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (l_total + (l_sep * (size - 1))));
	if (dest == NULL)
		return (NULL);
	*dest = ft_copy(strs, sep, dest, size);
	return (dest);
}
