/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:35:25 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/15 02:12:46 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find(char *str, char *to_find)
{
	int	counter_1;
	int	counter_2;
	int	flag;

	counter_1 = 0;
	counter_2 = -1;
	flag = -1;
	while (counter_2++, str[counter_2])
	{
		if (to_find[counter_1])
		{
			if (to_find[counter_1] == str[counter_2])
			{
				counter_1++;
				if (flag == -1)
					flag = counter_2;
			}
			else if (flag != -1)
			{
				flag = -1;
				counter_1 = 0;
			}
		}
	}
	return (flag);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	flag;

	if (to_find[0] != '\0')
	{
		flag = find(str, to_find);
		if (flag != -1)
			return (&str[flag]);
	}
	else
		return (str);
	return (NULL);
}
