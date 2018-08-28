/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:16:45 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:04:30 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		get_piece(t_data *data)
{
	t_matrix	*piece;
	char		*line;
	int			row;

	if (get_next_line(0, &line) > 0)
	{
		piece = initialize_matrix(ft_atoi(ft_strrchr(line, ' ')),
	ft_atoi(ft_strchr(line, ' ')));
		free(line);
		row = 0;
		data->piece = piece;
		while (row < piece->row)
		{
			if (get_next_line(0, &line) > 0)
			{
				fill_row(row++, line, piece);
				free(line);
			}
		}
	}
	return (1);
}
