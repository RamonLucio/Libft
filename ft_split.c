#include "libft.h"

static char	*ft_chrstr(char c, const char *s)
{
	while (*s == c)
	{
		s++;
		return ((char *) s);
	}
	return (0);
}

static size_t	ft_strcspn(const char *s, char c)
{
	size_t	span;

	span = 0;
	while (*s)
	{
		if (ft_chrstr(c, s))
			return (span);
		else
		{
			s++;
			span++;
		}
	}
	return (span);
}

static size_t	ft_strspn(const char *s, char c)
{
	size_t	span;

	span = 0;
	while (*s && ft_chrstr(c, s))
	{
		span++;
		s++;
	}
	return (span);
}

static size_t	tokctr(char const *s, char c)
{
	size_t	arr_size;

	arr_size = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		while ((*s != c) && (*s != '\0'))
			s++;
		arr_size++;
		while ((*s == c) && (*s != '\0'))
			s++;
	}
	return (arr_size);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	p = str;
	arr = (char **) malloc(sizeof(char *) * tokctr(s, c));
	i = 0;
	while (*str)
	{
		str = p + ft_strspn(p, c);
		p = str + ft_strcspn(str, c);
		if (*p != '\0')
			*p++ = '\0';
		if (*str != '\0')
			arr[i++] = ft_strdup(str);
	}
	arr[i] = NULL;
	return (arr);
}
