/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:21:33 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/11 02:09:06 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	flag;

	counter = 0;
	flag = 0;
	while (str[counter] != '\0')
	{
		if (! (str[counter] >= 65 && str[counter] <= 90))
			if (! (str[counter] >= 97 && str[counter] <= 122))
				flag++;
		counter++;
	}
	if (flag != 0)
		return (0);
	else
		return (1);
}
