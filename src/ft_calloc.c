/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:32:53 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:36:52 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_calloc.c: Allocates memory for an array of `count` elements, each of 
** them `size` bytes long, and initializes all its bits to zero. */

#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (print_error_char(MALLOC_ERROR));
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}
