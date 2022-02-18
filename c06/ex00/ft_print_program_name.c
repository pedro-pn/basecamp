/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:41:42 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:04:08 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 0;
	if (argc >= 1)
	{
		while (argv[0][counter])
		{
			write(1, &argv[0][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
