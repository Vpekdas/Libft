/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:47 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:59:02 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memchr.c: Scans the initial `n` bytes of the memory area pointed 
** to by `s` for the first instance of `c`. */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		uc;

	if (!s)
		return (print_error_char(STR_NULL_ERROR));
	uc = (unsigned char) c;
	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == uc)
		{
			return ((char *)(ptr + i));
		}
		i++;
	}
	if (uc == 0)
	{
		return (NULL);
	}
	return (NULL);
}
