/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:37:38 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/18 19:54:15 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	p;

	if (nb <= 1)
		return (0);
	p = 2;
	while (p <= nb / p)
	{
		if (nb % p == 0)
		{
			return (0);
		}
		p++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int			counter;

	counter = nb;
	while (1)
	{
		if (ft_is_prime(counter) == 1)
			return (counter);
		counter++;
	}
}
