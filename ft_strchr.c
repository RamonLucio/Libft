#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	char	character;

	string = (char *) s;
	character = (char) c;
	while (*string)
	{
		if (*string == character)
			return (string);
		string++;
	}
	if (*string == character)
		return (string);
	return (NULL);
}
