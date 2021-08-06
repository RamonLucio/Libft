#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = (char *) dst;
	source = (char *) src;
	while (n--)
		*destination++ = *source++;
	return (dst);
}
