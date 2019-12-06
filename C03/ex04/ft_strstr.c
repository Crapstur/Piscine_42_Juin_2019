/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:51:53 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 18:21:08 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_comparestr(int i, char *str, char *to_find)
{
	int h;

	h = 0;
	while (to_find[h] != '\0')
	{
		if (str[i] == to_find[h])
		{
			i++;
			h++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int add;
	int find;

	i = 0;
	find = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != '\0' && find != 1)
	{
		while (str[i] != to_find[0] && str[i] != 0)
			i++;
		add = i;
		find = ft_comparestr(i, str, to_find);
		if (str[i] != '\0')
			i++;
	}
	if (find == 1)
		return (str + add);
	else
		return (0);
}
