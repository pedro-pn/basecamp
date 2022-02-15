/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:38:32 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/11 00:01:27 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *arc)
{
	int	counter;

	counter = 0;
	while (arc[counter] != '\0')
	{
		dest[counter] = arc[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
