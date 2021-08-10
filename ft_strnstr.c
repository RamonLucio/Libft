#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str_haystack;
	const char	*str_needle;
	size_t		needle_len;

	str_haystack = haystack;
	str_needle = needle;
	if (*str_needle != '\0')
	{
		needle_len = ft_strlen(needle);
		if ((*str_haystack == '\0') || len < 1)
			return (NULL);
		while (*str_haystack && needle_len < len--)
		{
			if (ft_strncmp(str_haystack, str_needle, needle_len) == 0)
				return ((char *) str_haystack);
			str_haystack++;
		}
		return (NULL);
	}
	return ((char *) str_haystack);
}
