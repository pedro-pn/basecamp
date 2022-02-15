/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:42:47 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/12 15:20:41 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_captalize(char *str, int counter)
{
	while (str[counter])
	{
		if (! (str[counter - 1] >= 65 && str[counter - 1] <= 90))
		{
			if (! (str[counter - 1] >= 97 && str[counter - 1] <= 122))
			{
				if (! (str[counter - 1] >= 48 && str[counter - 1] <= 57))
				{
					if (str[counter] >= 97 && str[counter] <= 122)
					{
						str[counter] = str[counter] - 32;
						counter++;
						continue ;
					}
				}
			}
		}
		counter++;
	}
}

void	ft_captalize2(char *str, int counter)
{
	while (str[counter])
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			if (str[counter - 1] >= 48 && str[counter - 1] <= 57)
				str[counter] = str[counter] + 32;
			else if (str[counter - 1] >= 65 && str[counter - 1] <= 90)
				str[counter] = str[counter] + 32;
			else if (str[counter - 1] >= 97 && str[counter - 1] <= 122)
				str[counter] = str[counter] + 32;
		}
		counter++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	if (counter == 0 && str[counter] >= 97 && str[counter] <= 122)
	{
		str[counter] = str[counter] - 32;
		counter++;
	}
	ft_captalize(str, counter);
	ft_captalize2(str, counter);
	return (str);
}
