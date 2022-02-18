/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:42:36 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/07 22:42:26 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x = 8;
	int y = 2;

	
	printf("%d\n", x);
	printf("%d\n", y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
}