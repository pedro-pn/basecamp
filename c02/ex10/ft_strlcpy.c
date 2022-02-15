/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:09:48 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/12 15:51:31 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter2;
	unsigned int	counter;

	counter = 0;
	counter2 = 0;
	while (src[counter2] != '\0')
	{
		counter2++;
	}
	if (size > 0)
	{
		while (counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
	}
	if (size > 0)
		dest[counter] = '\0';
	return (counter2);
}
