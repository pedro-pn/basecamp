/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:02:56 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 01:40:01 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	counter;

	counter_dest = 0;
	counter = 0;
	while (dest[counter_dest] != 0)
		counter_dest++;
	while (src[counter] != '\0')
	{
		dest[counter_dest] = src[counter];
		counter++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
