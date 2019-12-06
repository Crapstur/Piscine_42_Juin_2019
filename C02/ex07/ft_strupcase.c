/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 01:18:22 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 12:50:29 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int lenght;
	int i;

	i = 0;
	lenght = 0;
	if (*str == '\0')
		return (str);
	while (str[lenght] != '\0')
	{
		if (str[lenght] <= 90 && str[lenght] >= 65)
			lenght++;
		else if (str[lenght] <= 122 && str[lenght] >= 97)
		{
			str[lenght] = str[lenght] - 32;
			lenght++;
		}
		else
			lenght++;
	}
	return (str);
}
