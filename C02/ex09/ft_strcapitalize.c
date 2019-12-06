/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:29:39 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/20 14:18:50 by rcapouil         ###   ########.fr       */
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
		if (str[lenght] >= 'A' && str[lenght] <= 'Z')
			str[lenght] = str[lenght] + 32;
		lenght++;
	}
	return (str);
}

char	ft_check(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	return (str[i]);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] < '0') || (str[i - 1] > 'z'))
			ft_check(str, i);
		else if (str[i - 1] > '9' && str[i - 1] < 'A')
			ft_check(str, i);
		else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
			ft_check(str, i);
		i++;
	}
	return (str);
}
