/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:58:43 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/13 12:50:40 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int lenght;
	int i;

	i = 0;
	lenght = 0;
	if (*str == '\0')
		return (str);
	while (str[lenght] != '\0')
	{
		if (str[lenght] <= 'Z' && str[lenght] >= 'A')
		{
			str[lenght] = str[lenght] + 32;
		}
		lenght++;
	}
	return (str);
}
