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
