/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:50:36 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/17 18:01:57 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_sort(int argc, char **argv)
{
	int		counter_org;
	char	*temp;
	int		value;
	int		flag;

	counter_org = 1;
	while (counter_org < argc - 1)
	{
		value = ft_strcmp(argv[counter_org], argv[counter_org + 1]);
		if (value > 0)
		{
			temp = argv[counter_org];
			argv[counter_org] = argv[counter_org + 1];
			argv[counter_org + 1] = temp;
			flag++;
		}
		if (counter_org == argc - 2 && flag != 0)
		{	
			flag = 0;
			counter_org = 1;
		}
		else
			counter_org++;
	}
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	counter2;

	counter = 1;
	ft_sort(argc, argv);
	while (counter < argc)
	{
		counter2 = 0;
		while (argv[counter][counter2])
		{
			write(1, &argv[counter][counter2], 1);
			counter2++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
