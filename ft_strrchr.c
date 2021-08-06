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
