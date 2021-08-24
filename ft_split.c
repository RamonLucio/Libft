/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlucio-l <rlucio-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:28:40 by rlucio-l          #+#    #+#             */
/*   Updated: 2021/08/24 16:28:41 by rlucio-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcspn(const char *s, char c)
{
	size_t	span;

	span = 0;
	while (*s && (*s != c))
	{
		s++;
		span++;
	}
	return (span);
}

static size_t	ft_strspn(const char *s, char c)
{
	size_t	span;

	span = 0;
	while (*s && (*s == c))
	{
		s++;
		span++;
	}
	return (span);
}

static size_t	tokctr(char const *s, char c)
{
	size_t	arr_size;

	arr_size = 1;
	while ((*s == c) && (*s != '\0'))
		s++;
	while (*s)
	{
		while ((*s != c) && (*s != '\0'))
			s++;
		arr_size++;
		while ((*s == c) && (*s != '\0'))
			s++;
	}
	return (arr_size);
}

static char	**ft_split_auxiliary(char const *s, char c, char *p, char **arr)
{
	char	*p_start;
	size_t	i;

	p_start = p;
	i = 0;
	while (*s)
	{
		s = p + ft_strspn(p, c);
		p = (char *) s + ft_strcspn(s, c);
		if (*p != '\0')
			*p++ = '\0';
		if (*s != '\0')
			arr[i++] = ft_strdup(s);
	}
	arr[i] = NULL;
	free(p_start);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*p;

	if (!s)
		return (NULL);
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * tokctr(s, c));
	if (!arr)
		return (NULL);
	arr = ft_split_auxiliary(s, c, p, arr);
	return (arr);
}
