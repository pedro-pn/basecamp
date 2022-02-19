/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:38:06 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 22:38:22 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int counter;
	int num;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(num) * (max - min));
	if (*range == NULL)
		return (-1);
	counter = 0;
	num = min;
	while (num < max)
	{
		(*range)[counter] = num;
		num++;
		counter++;
	}
	return (counter);
}

#include <stdio.h>

int main(void)
{
	int *matrix;
	int counter = 0;
	int tamanho;
	
	tamanho = ft_ultimate_range(&matrix, 4, 12);
	printf("Tamanho: %d\n", tamanho);
	while (matrix[counter])
	{
		printf("%d\n", matrix[counter]);
		counter++;
	}
}