/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:21:17 by msubtil-          #+#    #+#             */
/*   Updated: 2022/02/05 20:40:01 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char input)
{
	int	file_descriptor;
	int	input_size;

	file_descriptor = 1;
	input_size = 1;
	write(file_descriptor, &input, input_size);
}
