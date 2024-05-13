/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:38:52 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:11:50 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_striteri.c: Applies the function `f` to each character of the string
** passed as argument, and passing its index as first argument. */

#include "../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return (print_error_void(STR_NULL_ERROR));
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
