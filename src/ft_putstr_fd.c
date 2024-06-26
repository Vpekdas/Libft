/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:56:53 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:05:01 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putstr_fd.c: Outputs the string `s` to the given file descriptor. */

#include "../include/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (print_error_void(STR_NULL_ERROR));
	write(fd, s, ft_strlen(s));
}
