/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:50:22 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 00:18:49 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	counter;
	int	counter_2;

	counter = 0;
	while (base[counter])
	{
		counter_2 = 0;
		if (base[counter] == '+' || base[counter] == '-')
			return (0);
		else if (! (base[counter] >= 33 && base[counter] <= 126))
			return (0);
		while (base[counter_2])
		{
			if (base[counter] == base[counter_2] && counter != counter_2)
				return (0);
			counter_2++;
		}
		counter++;
	}
	return (counter);
}

int	check_str(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int	calc_num(int base, int pwd, int index_2)
{
	int	counter;
	int	value;

	counter = 0;
	value = 1;
	while (counter < pwd)
	{
		value *= base;
		counter++;
	}
	return (value * index_2);
}

int	verify_index(char num, char *base)
{
	int	index_1;

	index_1 = 0;
	while (base[index_1])
	{
		if (num == base[index_1])
			break ;
		index_1++;
	}
	return (index_1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	pwd;
	int	base_num;
	int	index;
	int	value;
	int	index_2;

	value = 0;
	base_num = check_base(base);
	if (base_num == 0 || base_num == 1)
		return (0);
	index = 0;
	pwd = check_str(str) - 1;
	while (str[index])
	{	
		index_2 = 0;
		index_2 = verify_index(str[index], base);
		value += calc_num(base_num, pwd, index_2);
		pwd--;
		index++;
	}
	return (value);
}
