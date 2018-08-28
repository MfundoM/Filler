/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:16:06 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:11:51 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		read_map(t_data *data)
{
	char		*line;
	t_matrix	*map;
	int			row;

	if (get_next_line(0, &line) > 0)
	{
		map = initialize_matrix(ft_atoi(ft_strrchr(line, ' ')),
	ft_atoi(ft_strchr(line, ' ')));
		data->map = map;
		free(line);
		if (get_next_line(0, &line) > 0)
		{
			row = 0;
			free(line);
			while (row < (map->row))
			{
				if (get_next_line(0, &line) > 0)
				{
					fill_row(row++, line, map);
					free(line);
				}
			}
		}
	}
	return (1);
}
