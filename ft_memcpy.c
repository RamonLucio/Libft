/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlucio-l <rlucio-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:28:19 by rlucio-l          #+#    #+#             */
/*   Updated: 2021/08/26 15:15:57 by rlucio-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	if (!dst || !src)
		return (NULL);
	destination = (char *) dst;
	source = (char *) src;
	while (n--)
		*destination++ = *source++;
	return (dst);
}
