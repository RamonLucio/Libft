/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlucio-l <rlucio-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:30:00 by rlucio-l          #+#    #+#             */
/*   Updated: 2021/08/24 16:30:01 by rlucio-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	str_len;
	char	*substr;

	str_len = ft_strlen(s);
	if (str_len > start)
	{
		index = 0;
		while ((index < len) && ((start + index) < str_len))
			index++;
		substr = (char *) malloc((index + 1) * sizeof(char));
	}
	else
		return (ft_strdup(""));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], index + 1);
	return (substr);
}
