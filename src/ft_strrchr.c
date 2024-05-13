/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:42:55 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:05:54 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strrchr.c: Locates the last occurrence of `c` (converted to a char)
** in the string pointed to by `s`. */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(s) - 1;
	ch = (char) c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i--;
	}
	if (ch == 0)
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}
