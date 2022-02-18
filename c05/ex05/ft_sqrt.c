/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:15:17 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 00:18:56 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 1;
	while (counter < 46341 && counter <= (nb / 2) + 1)
	{
		if (counter * counter == nb)
			return (counter);
		counter++;
	}
	return (0);
}
