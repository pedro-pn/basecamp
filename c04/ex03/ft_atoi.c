/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:53:28 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/16 18:07:47 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative_flag;
	int	counter;
	int	value;

	value = 0;
	counter = -1;
	negative_flag = 0;
	while (counter++, str[counter])
	{
		if (str[counter] == '-')
			negative_flag++;
		else if ((str[counter] >= 9 && str[counter] <= 13) 
				|| str[counter] == 32)
				continue ;
		else if (str[counter] >= 48 && str[counter] <= 57)
			value = (value * 10) + str[counter] - '0';
		else if (str[counter] != '+')
			break ;
	}
	if (negative_flag % 2 != 0 && negative_flag != 0)
		value *= -1;
	return (value);
}
