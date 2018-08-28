/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_date.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 11:33:53 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:01:32 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void		free_data(t_data *data)
{
	t_list	*current;
	t_list	*next;

	current = data->solution_lst;
	if (data->solution_lst)
	{
		while (current->next)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
	free((data->map)->element);
	free((data->map));
	free((data->piece)->element);
	free((data->piece));
	free((data->solution_lst));
}
