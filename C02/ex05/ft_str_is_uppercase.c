/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 01:01:21 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 12:49:18 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int lenght;
	int i;

	i = 0;
	lenght = 0;
	if (*str == '\0')
		return (1);
	while (str[lenght] != '\0')
	{
		if ((str[lenght] <= 90) && (str[lenght] >= 65))
			i = 1;
		else
		{
			i = 0;
			return (i);
		}
		lenght++;
	}
	return (i);
}
