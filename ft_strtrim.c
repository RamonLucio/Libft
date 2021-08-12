#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_index;
	size_t	last_index;
	char	*str;

	first_index = 0;
	while (s1[first_index] && ft_strchr(set, s1[first_index]))
		first_index++;
	last_index = ft_strlen(s1) - 1;
	while (last_index && s1[last_index] && ft_strchr(set, s1[last_index]))
		last_index--;
	str = ft_substr(s1, first_index, (last_index - first_index + 1));
	return (str);
}
