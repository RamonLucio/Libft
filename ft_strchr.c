#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	character;

	ptr = (char *) s;
	character = (char) c;
	while (*ptr)
	{
		if (*ptr == character)
			return (ptr);
		ptr++;
	}
	if (*ptr == character)
		return (ptr);
	return (NULL);
}
