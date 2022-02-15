/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:52:37 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/03 19:00:29 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	first_letter;
	int	last_letter;

	first_letter = 122;
	last_letter = 97;
	while (first_letter >= last_letter)
	{
		write(1, &first_letter, 1);
		first_letter -= 1;
	}
}
