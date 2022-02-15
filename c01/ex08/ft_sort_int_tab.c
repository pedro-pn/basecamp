/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:24:12 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/09 17:55:40 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int counter, int position)
{
	int	a;

	a = tab[position];
	tab[position] = tab[counter];
	tab[counter] = a;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	counter2;
	int	position;

	counter = 0;
	counter2 = 0;
	while (counter < size)
	{
		counter2 = 0;
		position = 0;
		while (counter2 < size)
		{
			if (tab[counter] > tab[counter2] && counter != counter2)
				position++;
			if (tab[counter] == tab[counter2] && counter != counter2)
				break ;
			if (counter2 == size - 1 && counter != position)
			{
				swap(tab, counter, position);
				counter = 0;
			}
			counter2++;
		}
		counter++;
	}	
}
