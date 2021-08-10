#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*destination;
	const char	*source;
	size_t		size;
	size_t		dst_len;

	destination = dst;
	source = src;
	size = dstsize;
	while (size-- != 0 && *destination != '\0')
		destination++;
	dst_len = destination - dst;
	size = dstsize - dst_len;
	if (size == 0)
		return (dst_len + ft_strlen(source));
	while (size-- > 1 && *source != '\0')
		*destination++ = *source++;
	*destination = '\0';
	while (*source++)
		;
	return (dst_len + (source - src) - 1);
}
