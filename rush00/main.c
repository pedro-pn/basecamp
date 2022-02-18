/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:14:31 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 03:29:59 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define DEFAULT_X 5
#define DEFAULT_Y 5
#define ARG_1 1
#define ARG_2 2
#define TRUE 1
#define FALSE 0

void	rush(int x, int y);

int	validate_input(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= '0') && (str[count] <= '9')))
			return (FALSE);
		count++;
	}
	return (TRUE);
}

long long	rush_atoi(const char *str)
{
	int			count;
	long long	value;

	count = 0;
	value = 0;
	while (str[count] != '\0')
	{
		value = (str[count] - '0') + 10 * value;
		count++;
	}
	return (value);
}

int	main(int argc, char *argv[])
{
	long long	x;
	long long	y;

	if (argc == 3)
	{
		if (validate_input(argv[ARG_1]) && (validate_input(argv[ARG_2])))
		{
			x = rush_atoi(argv[ARG_1]);
			y = rush_atoi(argv[ARG_2]);
			if ((x == 0) || (y == 0))
				return (EXIT_FAILURE);
			rush(x, y);
		}
		else
			return (EXIT_FAILURE);
	}
	else
		rush(DEFAULT_X, DEFAULT_Y);
	return (EXIT_SUCCESS);
}
