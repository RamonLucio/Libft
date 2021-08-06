#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*destination;
	const char	*source;
	size_t		destination_size;

	destination = dst;
	source = src;
	destination_size = dstsize;
	if (destination_size != 0)
	{
		while (--destination_size)
		{
			if (*source++ == '\0')
				break ;
			else
				(*destination++ = *source++);
		}
	}
	if (destination_size == 0)
	{
		if (dstsize != 0)
			*destination = '\0';
		while (*source++)
			;
	}
	return (source - src - 1);
}
