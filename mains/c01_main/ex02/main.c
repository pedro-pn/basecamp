/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:42:36 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/07 21:46:08 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b);

int	main(void)
{
	int x = 2;
	int y = 5;

	printf("%d\n", x);
	printf("%d\n", y);
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
}