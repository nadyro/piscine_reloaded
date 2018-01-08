/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 22:48:49 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/12 03:27:32 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab_integer;

	i = 0;
	if (min < max)
	{
		if (!(tab_integer = (int*)malloc(sizeof(*tab_integer) * (max - min))))
			return (NULL);
		while (min < max)
		{
			tab_integer[i] = min;
			min++;
			i++;
		}
		return (tab_integer);
	}
	return (0);
}
