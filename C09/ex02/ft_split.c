/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:40:36 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/25 17:48:43 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		str_nbr(char *str)
{
	int i;
	int cptr;

	i = 1;
	cptr = 1;
	if (str[0] == 0)
		return (0);
	if (str[0] == 7)
		cptr = 0;
	while (str[i])
	{
		if (str[i] != 7 && str[i - 1] == 7)
			cptr++;
		i++;
	}
	return (cptr);
}

int		*char_number(char *str, int str_nbr)
{
	int i;
	int j;
	int *cptr;

	i = 1;
	j = 0;
	if (str_nbr == 0 || !(cptr = (int *)malloc(sizeof(int) * (str_nbr))))
		return (0);
	cptr[0] = 0;
	if (str[0] != 7)
		cptr[0]++;
	while (*(str + i))
	{
		if (*(str + i) != 7)
			cptr[j]++;
		if (*(str + i) == 7 && *(str + i - 1) != 7)
		{
			j++;
			if (j < str_nbr)
				cptr[j] = 0;
		}
		i++;
	}
	return (cptr);
}

char	*ft_replace_charset(char *str, char *charset, int size)
{
	char	*strcpy;
	int		i;
	int		j;
	int		mark;

	i = 0;
	strcpy = (char *)malloc(size + 1);
	while (*(str + i))
	{
		mark = 0;
		j = 0;
		while (*(charset + j))
		{
			if (*(str + i) == *(charset + j))
				mark = 1;
			j++;
		}
		if (mark == 1)
			*(strcpy + i) = 7;
		else
			*(strcpy + i) = *(str + i);
		i++;
	}
	*(strcpy + i) = 0;
	return (strcpy);
}

void	ft_copy(char **split, char *str, int strnb)
{
	int j;
	int i;
	int cptr;

	j = 0;
	i = 0;
	cptr = 0;
	if (str[0] == 7)
		cptr = -1;
	while (*(str + i))
	{
		if (i != 0 && *(str + i) != 7 && *(str + i - 1) == 7)
			cptr++;
		if (cptr == strnb)
			break ;
		i++;
	}
	while (*(str + i) != 7 && *(str + i) != 0)
	{
		split[strnb][j] = str[i];
		i++;
		j++;
	}
	split[strnb][j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		*c_nb;
	char	**split;
	char	*new_str;

	i = 0;
	while (*(str + i))
		i++;
	new_str = ft_replace_charset(str, charset, i);
	split = malloc(sizeof(*split) * (str_nbr(new_str) + 1));
	c_nb = char_number(new_str, str_nbr(new_str));
	j = 0;
	while (j < str_nbr(new_str))
	{
		split[j] = malloc((int)sizeof(**split) * (c_nb[j] + 1));
		ft_copy(split, new_str, j);
		j++;
	}
	split[j] = 0;
	return (split);
}
