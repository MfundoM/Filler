/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:09:18 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/14 15:09:51 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	place_piece(t_list *solution)
{
	int		fd;
	t_list	*current;

	fd = 1;
	if (solution == NULL)
	{
		ft_putstr_fd("0 0\n", fd);
		return ;
	}
	current = solution;
	while (current->next)
		current = current->next;
	ft_putnbr_fd(((int *)current->content)[1], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(((int *)current->content)[0], fd);
	ft_putstr_fd("\n", fd);
}
