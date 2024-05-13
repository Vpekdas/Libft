/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:42:07 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:13:26 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strmapi.c: Applies the function `f` to each character of the string
** `s` to create a new string resulting from successive applications of `f`. */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	if (!s)
		return (print_error_char(STR_NULL_ERROR));
	i = 0;
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (print_error_char(MALLOC_ERROR));
	while (s[i] && f)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
