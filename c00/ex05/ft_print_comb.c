/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:13:25 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/07 16:15:42 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_output(int a, int b, int c)
{
	if (a != b && a != c && b != c && b < c && b > a)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a < 55)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	first_num;
	int	second_num;
	int	third_num;

	first_num = 48;
	second_num = 48;
	third_num = 48;
	while (first_num <= 57)
	{
		while (second_num <= 57)
		{
			while (third_num <= 57)
			{
				show_output(first_num, second_num, third_num);
				third_num++;
			}
			third_num = 48 ;
			second_num++;
		}
		second_num = 48;
		first_num++;
	}
}
