/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:44:29 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:06:04 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strtrim.c: Allocates and returns a copy of `s1` with the characters
** specified in `set` removed from the beginning and the end of the string. */

#include "../include/libft.h"

static int	ft_is_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_is_set(set, s1[start]))
		start++;
	while (end > start && ft_is_set(set, s1[end - 1]))
		end--;
	trimmed_len = end - start;
	ptr = malloc(trimmed_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, trimmed_len + 1);
	return (ptr);
}
