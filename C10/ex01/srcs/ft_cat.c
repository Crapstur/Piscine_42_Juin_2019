/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:35:53 by rcapouil          #+#    #+#             */
/*   Updated: 2019/06/27 16:32:30 by rcapouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	disp_file(int fd, char *argv, char *str)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
	{
		if (errno == 21)
		{
			ft_putstr(basename(str));
			write(2, ": ", 2);
			ft_putstr(argv);
			write(2, ": ", 2);
			write(2, "Is a directory\n", 15);
			break ;
		}
		else
			write(1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	if (argc == 1 || argv[1][0] == 45)
		disp_file(STDIN_FILENO, *argv, argv[0]);
	else if (argc > 1)
		while (i < argc)
		{
			errno = 0;
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
			{
				ft_putstr(basename(argv[0]));
				write(2, ": ", 2);
				ft_putstr(argv[i]);
				write(2, ": ", 2);
				write(2, "No such file or directory\n", 26);
				return (0);
			}
			disp_file(fd, argv[i], argv[0]);
			i++;
			close(fd);
		}
	return (0);
}
