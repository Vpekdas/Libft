/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:37:05 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:00:45 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstlast.c: Returns the last element of the list. */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*previous;

	if (!lst)
		return (NULL);
	current = lst;
	while (current)
	{
		previous = current;
		current = current->next;
	}
	return (previous);
}
