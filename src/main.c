/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:10:09 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:14:21 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

t_data		*initialize_data(void)
{
	t_data	*data;

	if (!(data = (t_data *)malloc(sizeof(t_data))))
	{
		perror("Failed to allocate memory for data");
		return (NULL);
	}
	data->player = -1;
	data->territory = -1;
	data->map = NULL;
	data->piece = NULL;
	data->solution_lst = NULL;
	data->possible_solution = 0;
	return (data);
}

void		initialize_player(t_data *data)
{
	char	*line;

	if (get_next_line(0, &line) > 0)
	{
		if (ft_strchr(line, '1') != NULL)
		{
			data->player = 1;
			data->territory = 2;
		}
		else
		{
			data->player = 2;
			data->territory = 4;
		}
	}
}

t_list		*initialize_solution_lst(void)
{
	int		*content;
	t_list	*list;

	if (!(content = (int *)malloc(sizeof(int) * 2)))
	{
		perror("Failed to initialize content, memory allocation failed");
		return (NULL);
	}
	content[0] = 0;
	content[1] = 0;
	if (!(list = ft_lstnew((void *)content, sizeof(int) * 2)))
	{
		perror("Failed to initialize list, memory allocation failed");
		return (NULL);
	}
	return (list);
}

int			main(void)
{
	t_data	*data;

	data = initialize_data();
	initialize_player(data);
	while (1)
	{
		data->solution_lst = initialize_solution_lst();
		read_map(data);
		get_piece(data);
		if (check_solution(data) == 0)
		{
			ft_putstr_fd("8 2\n", 1);
			break ;
		}
		else
			place_piece(data->solution_lst);
	}
	free_data(data);
	return (1);
}
