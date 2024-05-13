/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:56:13 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:03:52 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putchar_fd.c: Outputs the character `c` to the given file descriptor. */

#include "../include/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return (print_error_void(STR_NULL_ERROR));
	if (write(fd, &c, 1) == ERROR)
		return (print_error_void(WRITE_ERROR));
}
