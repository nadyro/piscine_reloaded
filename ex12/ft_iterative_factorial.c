/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 21:57:42 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/10 22:10:51 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int y;

	y = nb;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < y)
	{
		if (y < 0 || y > 12)
			return (0);
		else
		{
			nb *= i;
			i++;
		}
	}
	return (nb);
}
