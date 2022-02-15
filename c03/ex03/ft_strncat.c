/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:11:46 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 02:20:57 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	counter_dest;

	counter = 0;
	counter_dest = 0;
	while (dest[counter_dest] != '\0')
		counter_dest++;
	while (src[counter] != '\0' && counter < nb)
	{
		dest[counter_dest] = src[counter];
		counter++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
