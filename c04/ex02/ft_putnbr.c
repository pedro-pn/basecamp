/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:46:58 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 19:03:35 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int				value;
	unsigned int	u_nb;

	if (nb < 0)
	{	
		nb++;
		nb *= -1;
		u_nb = nb + 1;
		write(1, "-", 1);
	}
	else
		u_nb = nb;
	value = (u_nb % 10) + 48;
	if (u_nb / 10 != 0)
		ft_putnbr((u_nb / 10));
	write(1, &value, 1);
}
