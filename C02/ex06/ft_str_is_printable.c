/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 01:07:19 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 12:49:30 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int lenght;
	int i;

	i = 0;
	lenght = 0;
	if (*str == '\0')
		return (1);
	while (str[lenght] != '\0')
	{
		if (str[lenght] < 127 && str[lenght] > 31)
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
