/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:22:59 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/12 15:47:51 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	flag;

	flag = 0;
	counter = 0;
	while (str[counter])
	{
		if (! (str[counter] >= 32 && str[counter] < 127))
			flag++;
		counter++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
