/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:30:29 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/10 16:35:40 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	flag;

	counter = 0;
	flag = 0;
	while (str[counter])
	{
		if (!(str[counter] >= 48 && str[counter] <= 57))
			flag++;
		counter++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
