/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:44:35 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:15:51 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_substr.c: Allocates and returns a substring from the string `s`.
** The substring begins at index `start` and is of maximum size `len`. */

#include "../include/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (print_error_char(STR_NULL_ERROR));
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	i = 0;
	if (start + len > s_len)
		len = s_len - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (print_error_char(MALLOC_ERROR));
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
