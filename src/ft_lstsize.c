/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:40 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:01:17 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstsize.c: Counts the number of elements in a list. */

#include "../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	if (!lst)
		return (0);
	i = 0;
	current = lst;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
