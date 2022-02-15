/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:09:00 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/10 17:12:54 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	flag;

	counter = 0;
	flag = 0;
	while (str[counter])
	{
		if (! (str[counter] >= 65 && str[counter] <= 90))
			flag++;
		counter++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
