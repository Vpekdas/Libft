/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:56:13 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:02:25 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putchar_fd.c: Outputs the character `c` to the given file descriptor. */

#include "../include/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
