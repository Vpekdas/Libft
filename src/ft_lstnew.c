/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:33 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:18:16 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstnew.c: Allocates and returns a new element. The variable `content` 
** is initialized with the value of the parameter `content`. */

#include "../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ((t_list *)(print_error_char(MALLOC_ERROR)));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
