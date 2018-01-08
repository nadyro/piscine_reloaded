/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 22:43:49 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/10 22:46:00 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap_str(char **str1, char **str2)
{
	char *c;

	c = *str1;
	*str1 = *str2;
	*str2 = c;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	y = 1;
	while (i < argc - 1)
	{
		y = 1;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
				ft_swap_str(&argv[y], &argv[y + 1]);
			y++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
