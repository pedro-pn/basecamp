/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:37:55 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/09 23:51:28 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_output(int a, int b, int c, int d)
{
	if ((a - 48) * 10 + (b - 48) < (c - 48) * 10 + (d - 48))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (((a - 48) * 10 + (b - 48)) != 98)
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	num_1[2];
	int	num_2[2];

	num_1[0] = 47;
	num_1[1] = 47;
	num_2[0] = 47;
	num_2[1] = 47;
	while (num_1[0]++ <= 56)
	{
		while (num_1[1]++ <= 56)
		{
			while (num_2[0]++ <= 56)
			{
				while (num_2[1]++ <= 56)
				{
					show_output(num_1[0], num_1[1], num_2[0], num_2[1]);
				}
				num_2[1] = 47;
			}
			num_2[0] = 47;
		}
		num_1[1] = 47;
	}
}

int main(void)
{
	ft_print_comb2();
}