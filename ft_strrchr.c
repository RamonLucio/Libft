/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlucio-l <rlucio-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:29:47 by rlucio-l          #+#    #+#             */
/*   Updated: 2021/08/24 16:29:48 by rlucio-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	character;
	char	*return_value;

	ptr = (char *) s;
	character = (char) c;
	return_value = NULL;
	while (*ptr)
	{
		if (*ptr == character)
			return_value = ptr;
		ptr++;
	}
	if (*ptr == character)
		return (ptr);
	return (return_value);
}
