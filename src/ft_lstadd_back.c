/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:35:31 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 01:59:48 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/* ft_lstadd_back.c: Adds a new element at the end of the list. */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*previous;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current)
	{
		previous = current;
		current = current->next;
	}
	previous->next = new;
}
