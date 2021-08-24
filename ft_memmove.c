/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlucio-l <rlucio-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:28:27 by rlucio-l          #+#    #+#             */
/*   Updated: 2021/08/24 16:28:28 by rlucio-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;

	destination = (char *) dst;
	source = (char *) src;
	if (destination < source)
		while (len--)
			*destination++ = *source++;
	else
	{
		destination += (len - 1);
		source += (len - 1);
		while (len--)
			*destination-- = *source--;
	}
	return (dst);
}
