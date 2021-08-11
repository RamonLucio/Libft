#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1) + 1;
	p = (char *) malloc(len);
	if (p != NULL)
		ft_strlcpy(p, s1, len);
	return (p);
}
