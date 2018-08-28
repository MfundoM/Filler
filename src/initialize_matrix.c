/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:16:17 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:13:55 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

t_matrix	*initialize_matrix(int column, int row)
{
	t_matrix	*matrix;

	if (column < 0 || row < 0)
		return (NULL);
	if (!(matrix = (t_matrix *)malloc(sizeof(t_matrix))))
		return (NULL);
	matrix->element = (signed char *)malloc(sizeof(signed char) * column * row);
	matrix->column = column;
	matrix->row = row;
	return (matrix);
}
