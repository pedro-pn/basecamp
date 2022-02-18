/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:25:22 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 00:09:28 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define VERTEX_UL 'A'
#define VERTEX_UR 'C'
#define VERTEX_DL 'C'
#define VERTEX_DR 'A'
#define EDGE_H 'B'
#define EDGE_V 'B'
#define WHITESPACE ' '
#define TRUE 1
#define FALSE 0

void	putchar(char input);
struct	s_point
{
	long long	count_x;
	long long	count_y;
	long long	x;
	long long	y;
};
int		evaluate_uv(struct s_point point);
int		evaluate_dv(struct s_point point);
int		evaluate_he(struct s_point point);
int		evaluate_ve(struct s_point point);

// Up Vertices
int	evaluate_uv(struct s_point point)
{
	if (point.count_y == 0)
	{
		if (point.count_x == 0)
			putchar(VERTEX_UL);
		else if (point.count_x == (point.x - 1))
			putchar(VERTEX_UR);
		else
			return (FALSE);
		return (TRUE);
	}
	return (FALSE);
}

// Down Vertices
int	evaluate_dv(struct s_point point)
{
	if (point.count_y == (point.y - 1))
	{
		if (point.count_x == 0)
			putchar(VERTEX_DL);
		else if (point.count_x == (point.x - 1))
			putchar(VERTEX_DR);
		else
			return (FALSE);
		return (TRUE);
	}
	return (FALSE);
}

// Horizontal Edge
int	evaluate_he(struct s_point point)
{
	if ((point.count_y == 0) || (point.count_y == (point.y - 1)))
	{
		putchar(EDGE_H);
		return (TRUE);
	}
	return (FALSE);
}

// Vertical Edge
int	evaluate_ve(struct s_point point)
{
	if ((point.count_x == 0) || (point.count_x == (point.x - 1)))
	{
		putchar(EDGE_V);
		return (TRUE);
	}
	return (FALSE);
}

void	rush(long long x, long long y)
{
	struct s_point	current_point;

	current_point.x = x;
	current_point.y = y;
	current_point.count_y = 0;
	while (current_point.count_y < y)
	{
		current_point.count_x = 0;
		while (current_point.count_x < x)
		{
			if (evaluate_uv(current_point) == TRUE)
				;
			else if (evaluate_dv(current_point) == TRUE)
				;
			else if (evaluate_he(current_point) == TRUE)
				;
			else if (evaluate_ve(current_point) == TRUE)
				;
			else
				putchar(WHITESPACE);
			current_point.count_x += 1;
		}
		putchar('\n');
		current_point.count_y += 1;
	}
}
