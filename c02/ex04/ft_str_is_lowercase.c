/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:40:19 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/11 02:13:21 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	flag;

	flag = 0;
	counter = 0;
	while (str[counter])
	{
		if (! (str[counter] <= 122 && str[counter] >= 97))
			flag++;
		counter++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}
