/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:15:13 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/13 16:31:03 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLUMN 4
#define COL_UP 0
#define COL_DOWN 1
#define ROW_LEFT 2
#define ROW_RIGHT 3

int	**alloc_matrix(int row, int column)
{
	int	row_index;
	int	**matrix;

	row_index = 0;
	matrix = malloc(sizeof(int *) * row);
	while (row_index < row)
	{
		matrix[row_index] = malloc(sizeof(int) * column);
		row_index++;
	}
	return (matrix);
}

void	free_matrix(int **matrix, int row)
{
	int	row_index;

	row_index = 0;
	while (row_index < row)
	{
		free(matrix[row_index]);
		row_index++;
	}
	free(matrix);
}

void	ft_atoi(char *argv[], int **input)
{
	int	index_argv;
	int	index_input_1;
	int	index_input_2;
	int	value;

	index_argv = 0;
	index_input_1 = 0;
	value = 0;
	while (index_input_1 < ROW)
	{
		index_input_2 = 0;
		while (index_input_2 < COLUMN)
		{
			value = 0;
			if (argv[1][index_argv] >= 48 && argv[1][index_argv] <= 57)
			{
				value = (value * 10) + (argv[1][index_argv] - '0');
				input[index_input_1][index_input_2] = value;
				index_input_2++;
			}
			index_argv++;
		}
		index_input_1++;
	}
}

void	start_matrix(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while (j < COLUMN)
		{
			matrix[i][i] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	**input;
	int	**matrix;

	matrix = alloc_matrix(ROW, COLUMN);
	input = alloc_matrix(ROW, COLUMN);
	start_matrix(matrix);
	if (argc == 2)
		ft_atoi(argv, input);
	else
	{
		write(1, "Error", 5);
		return (1);
	}
	free_matrix(matrix, ROW);
	free_matrix(input, ROW);
}
