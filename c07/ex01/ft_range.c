/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:02:52 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 22:39:53 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int counter;
	int *matrix;
	int	num;

	if (max - min <= 0)
		return (NULL);
	matrix = malloc(sizeof(matrix) * (max - min));
	num = min;
	counter = 0;
	while (num < max)
	{
		matrix[counter] = num;
		num++;
		counter++;
	}
	return (matrix);
}
#include <stdio.h>
int main(void)
{
	int	*list;
	int counter = 0;
	list = ft_range(, );
	while (list[counter])
	{
		printf("%d\n", list[counter]);
		counter++;
	}
}