/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:29:24 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:05:02 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter;
	int	counter_2;

	counter = 1;
	while (counter < argc)
	{
		counter_2 = 0;
		while (argv[counter][counter_2])
		{
			write(1, &argv[counter][counter_2], 1);
			counter_2++;
		}
		counter++;
		write(1, "\n", 1);
	}
	return (0);
}
