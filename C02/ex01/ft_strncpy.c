/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 00:12:01 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/19 10:55:38 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int lenght;

	lenght = 0;
	while (lenght < n && src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	while (lenght < n)
	{
		dest[lenght] = '\0';
		lenght++;
	}
	return (dest);
}
