/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:55:34 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:02:03 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memmove.c: Copies `n` bytes from `src` to `dest`, but is safe for 
** overlapping memory areas. */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (dest > source)
	{
		while (n > 0)
		{
		dest[n - 1] = source[n - 1];
		n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
