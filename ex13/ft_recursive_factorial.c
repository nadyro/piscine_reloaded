/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 22:11:37 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/10 22:21:15 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (nb = 1);
	if (nb < 0)
		return (0);
	if (nb < 1 || nb > 12)
		return (0);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
