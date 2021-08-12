#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	substr_len;
	char	*substr;

	index = 0;
	if (s == NULL)
		return (NULL);
	substr_len = ft_strlen(s);
	if (substr_len < len)
		substr = (char *) malloc((substr_len + 1) * sizeof(char));
	else
		substr = (char *) malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while ((index < len) && ((start + 1) < substr_len))
	{
		substr[index] = s[start + index];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
