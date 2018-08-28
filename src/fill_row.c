/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_row.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:03:35 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/28 10:08:03 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

signed	char	game_element(char elem)
{
	if (elem == '.')
		return (0);
	else if (elem == '*')
		return (1);
	else if ((elem) == 'o')
		return (2);
	else if (elem == 'O')
		return (3);
	else if ((elem) == 'x')
		return (4);
	else if (elem == 'X')
		return (5);
	else
		return (-1);
}

void			fill_row(int row, char *line, t_matrix *matrix)
{
	int				column;
	signed	char	data;
	char			*temp;
	int				index;

	column = 0;
	temp = line;
	while (column < (matrix->column))
	{
		if ((data = game_element(*temp)) >= 0)
		{
			index = (matrix->column) * (row) + column;
			(matrix->element)[index] = data;
			column++;
		}
		temp++;
	}
}
