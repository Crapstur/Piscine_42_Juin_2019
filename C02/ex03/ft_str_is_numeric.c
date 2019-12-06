/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 00:32:16 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/12 22:01:43 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int lenght;
	int i;

	i = 1;
	lenght = 0;
	if (str == '\0')
		return (1);
	while (str[lenght] != '\0')
	{
		if ((str[lenght] <= 57) && (str[lenght] >= 48))
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
