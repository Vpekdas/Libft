/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:32:38 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:36:26 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_bzero.c: Sets the first `n` bytes of the area starting at `s` to zero. */

#include "../include/libft.h"

void	print_error_void(char *error_message)
{
	if (error_message != NULL)
	{
		ft_putstr_fd(RED, 2);
		ft_putstr_fd(error_message, 2);
		ft_putstr_fd(NC, 2);
	}
}

char	*print_error_char(char *error_message)
{
	if (error_message != NULL)
	{
		ft_putstr_fd(RED, 2);
		ft_putstr_fd(error_message, 2);
		ft_putstr_fd(NC, 2);
	}
	return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (!s)
		return (print_error_void(STR_NULL_ERROR));
	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
