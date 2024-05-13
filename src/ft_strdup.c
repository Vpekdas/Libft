/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:46 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:11:37 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strdup.c: Returns a pointer to a new string which is a duplicate 
** of the string `s`. */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	if (!s1)
		return (print_error_char(STR_NULL_ERROR));
	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (print_error_char(MALLOC_ERROR));
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
