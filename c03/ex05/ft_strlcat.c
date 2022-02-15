/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:20:15 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 00:24:33 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_src;
	unsigned int	counter_dest;
	int				length_src;
	int				length;

	counter_src = 0;
	counter_dest = 0;
	length_src = 0;
	length = 0;
	while (dest[counter_dest] != '\0')
		counter_dest++;
	while (src[length_src])
		length_src++;
	length = length_src + counter_dest;
	while (counter_dest < size - 1 && src[counter_src] != '\0')
	{
		dest[counter_dest] = src[counter_src];
		counter_src++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (length);
}
