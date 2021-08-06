#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	char		character;
	char		*return_value;

	ptr = s;
	character = (char) c;
	return_value = NULL;
	while (*ptr++)
		if (*ptr == character)
			return_value = (char *) ptr;
	return (return_value);
}
