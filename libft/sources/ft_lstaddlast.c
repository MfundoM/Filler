/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:08:54 by mmthethw          #+#    #+#             */
/*   Updated: 2018/04/07 12:09:07 by mmthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddlast(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	current = *alst;
	while (current->next)
		current = current->next;
	current->next = new;
}
