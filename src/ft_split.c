/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inf1n1ty <inf1n1ty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:10:48 by vopekdas          #+#    #+#             */
/*   Updated: 2024/05/13 03:46:24 by inf1n1ty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_split.c: Allocates and returns an array of strings obtained by 
** splitting `s` using the character `c` as a delimiter. */

#include "../include/libft.h"

static void	*ft_free(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (print_error_char(STR_NULL_ERROR));
	while (tab[i])
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	return (tab);
}

static char	*ft_strcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (print_error_char(STR_NULL_ERROR));
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count_words(const char *str, char c)
{
	int	count;

	count = 0;
	if (!str)
		return (print_error_int(STR_NULL_ERROR));
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static char	*ft_copy_words(const char *str, char sep, int *length)
{
	int			len;
	const char	*start;
	char		*ptr;

	if (!str)
		return (print_error_char(STR_NULL_ERROR));
	if (!length)
		print_error_char(INT_NULL_ERROR);
	start = str;
	while (*str && *str != sep)
		str++;
	len = str - start;
	*length = len;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (print_error_char(MALLOC_ERROR));
	ft_strcpy(ptr, start, len);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len;
	int		i;

	i = 0;
	if (!s)
		return ((char **)(print_error_char(STR_NULL_ERROR)));
	result = ft_calloc(sizeof(char *), (ft_count_words(s, c) + 1));
	if (!result)
		return ((char **)(print_error_char(MALLOC_ERROR)));
	while (*s)
	{
		len = 0;
		if (*s != c)
		{
			result[i] = ft_copy_words(s, c, &len);
			if (!result[i])
				return (ft_free(result));
			i++;
		}
		if (*s == c)
			s++;
		s += len;
	}
	return (result);
}
