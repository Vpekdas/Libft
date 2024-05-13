/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:32:19 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 02:06:56 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/* ft_atoi.c: Converts the initial portion of the string pointed to by `str` 
** to an integer. */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	count_sign;

	i = 0;
	sign = 1;
	result = 0;
	count_sign = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+' || str[i] == '-') && count_sign < 1)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
		count_sign++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
