/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:26:37 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 16:51:19 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		counter;

	len = 0;
	counter = 0;
	while (src[len])
		len++;
	cpy = malloc(sizeof(cpy) * len);
	while (src[counter])
	{
		cpy[counter] = src[counter];
		counter++;
	}
	return (cpy);
}
