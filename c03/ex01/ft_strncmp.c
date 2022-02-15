/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:52:05 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 01:22:52 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	int				diff;

	counter = 0;
	diff = 0;
	while ((s1[counter] || s2[counter]) && counter < n)
	{
		diff = s1[counter] - s2[counter];
		if (diff == 0)
			counter++;
		else
			break ;
	}
	return (diff);
}
