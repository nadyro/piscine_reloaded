/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 23:51:48 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/12 04:10:15 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	tab[SIZE_TAB + 1];

	fd = open(argv[1], O_RDONLY);
	rd = 0;
	if (fd == -1 && argc == 1)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else if (argc == 3)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	while ((rd = read(fd, tab, SIZE_TAB)))
	{
		tab[rd] = '\0';
		ft_putstr(tab, 1);
	}
	return (0);
}
