/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:20:47 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 00:31:56 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	counter;
	int	counter_2;

	counter = 0;
	while (base[counter])
	{
		counter_2 = 0;
		if (base[counter] == '+' || base[counter] == '-')
			return (0);
		while (base[counter_2])
		{
			if (base[counter] == base[counter_2] && counter != counter_2)
				return (0);
			counter_2++;
		}
		counter++;
	}
	return (counter);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				mod;
	int				quotient;
	int				base_num;
	unsigned int	u_nbr;

	u_nbr = 0;
	base_num = check_base(base);
	if (base_num > 1)
	{
		if (nbr < 0)
		{
			nbr++;
			nbr *= -1;
			u_nbr = nbr + 1;
			write(1, "-", 1);
		}
		else
			u_nbr = nbr;
		quotient = u_nbr / base_num;
		mod = u_nbr % base_num;
		if (quotient != 0)
			ft_putnbr_base(quotient, base);
		write(1, &base[mod], 1);
	}
}
