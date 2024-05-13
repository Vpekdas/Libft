/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:41:01 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:12:56 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strlcpy.c: Copies up to `size - 1` characters from the null-terminated
** string `src` to `dst`, null-terminating the result. */

#include "../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (print_error_int(STR_NULL_ERROR));
	while (src[i])
	{
		if ((i < size - 1 && size != 0))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	if (size != 0)
		dst[j] = '\0';
	return (i);
}
