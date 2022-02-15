/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:25:20 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/09 16:47:37 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	invert_tab_even(int *tab, int size)
{
	int	counter_1;
	int	counter_2;
	int	start;
	int	final;

	counter_1 = 0;
	counter_2 = size - 1;
	while (counter_1 < counter_2)
	{
		start = tab[counter_1];
		final = tab[counter_2];
		tab[counter_1] = final;
		tab[counter_2] = start;
		counter_1++;
		counter_2--;
	}
}

void	invert_tab_odd(int *tab, int size)
{
	int	counter_1;
	int	counter_2;
	int	start;
	int	final;

	counter_1 = 0;
	counter_2 = size - 1;
	while (counter_1 != counter_2)
	{
		start = tab[counter_1];
		final = tab[counter_2];
		tab[counter_1] = final;
		tab[counter_2] = start;
		counter_1++;
		counter_2--;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	if (size % 2 == 0)
		invert_tab_even(tab, size);
	else
		invert_tab_odd(tab, size);
}
