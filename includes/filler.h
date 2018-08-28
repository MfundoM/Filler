/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:15:38 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:15:52 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <stdio.h>
# include "../libft/libft.h"

typedef	struct		s_matrix
{
	int				column;
	int				row;
	signed	char	*element;
}					t_matrix;

typedef	struct		s_data
{
	int				player;
	signed	char	territory;
	int				possible_solution;
	t_matrix		*map;
	t_matrix		*piece;
	t_list			*solution_lst;
	t_list			*content;
}					t_data;

int					read_map(t_data *map);

t_matrix			*initialize_matrix(int col, int row);

void				free_data(t_data *data);

void				place_piece(t_list *solution);

void				fill_row(int row, char *line, t_matrix *matrix);

int					get_piece(t_data *piece);

int					check_solution(t_data *data);

#endif
