/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:10:24 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/10 18:31:49 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{	
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
