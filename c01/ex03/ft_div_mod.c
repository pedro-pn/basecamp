/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:53:09 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/02/07 22:37:15 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	ans_div;
	int	sobra;

	ans_div = a / b;
	sobra = a % b;
	*div = ans_div;
	*mod = sobra;
}
