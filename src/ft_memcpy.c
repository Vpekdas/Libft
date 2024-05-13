/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:55:18 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:01:54 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memcpy.c: Copies `n` bytes from memory area `src` to memory area `dest`.*/

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*source;

	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
