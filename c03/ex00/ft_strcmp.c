/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:14:36 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 01:15:11 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	diff;

	counter = 0;
	diff = 0;
	while (s1[counter] || s2[counter])
	{
		diff = s1[counter] - s2[counter];
		if (diff == 0)
			counter++;
		else
			break ;
	}
	return (diff);
}
