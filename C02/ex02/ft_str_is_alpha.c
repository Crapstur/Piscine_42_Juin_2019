/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 00:15:55 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/12 16:28:14 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int lenght;
	int i;

	i = 1;
	lenght = 0;
	if (str == '\0')
		return (1);
	while (str[lenght] != '\0')
	{
		if ((str[lenght] <= 90) && (str[lenght] >= 65))
			i = 1;
		else if ((str[lenght] <= 122) && (str[lenght] >= 97))
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
