/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:14:23 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:13:25 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

signed char	matrix_element(int column, int row, t_matrix *matrix)
{
	int		index;

	if ((column < 0) || (row < 0) || (column >= matrix->column) ||
			(row >= matrix->row))
		return (-1);
	index = (matrix->column) * (row) + column;
	return ((matrix->element)[index]);
}

int			validate_move(int *col_row, t_data *data)
{
	signed char		check;
	int				row;
	int				column;
	int				number_of_ovrlaps;

	row = -1;
	number_of_ovrlaps = 0;
	while (++row < (data->piece->row))
	{
		column = -1;
		while (++column < (data->piece->column))
		{
			check = matrix_element(column, row, data->piece) *
	matrix_element(col_row[0] + column, col_row[1] + row, data->map);
			if ((check == 0) || (check == (data->territory + 1)))
			{
				if (check == data->territory || check == (data->territory + 1))
					number_of_ovrlaps++;
			}
			else
				return (0);
		}
	}
	return (number_of_ovrlaps);
}

void		valid_solution(int *col_row, t_data *data)
{
	if (validate_move(col_row, data) == 1)
	{
		ft_lstaddlast(&(data->solution_lst), ft_lstnew((void *)col_row,
	sizeof(int) * 3));
		data->possible_solution++;
	}
}

int			check_solution(t_data *data)
{
	int		*col_row;

	if (!(col_row = (int *)malloc(sizeof(int) * 3)))
		return (-1);
	col_row[0] = 1 - (data->piece->column);
	data->possible_solution = 0;
	while (col_row[0] < data->map->column)
	{
		col_row[1] = 1 - data->piece->row;
		while (col_row[1] < data->map->row)
		{
			valid_solution(col_row, data);
			col_row[1] += 1;
		}
		col_row[0] += 1;
	}
	free(col_row);
	return (data->possible_solution);
}
