char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str_haystack;
	char	*str_needle;
	size_t	needle_len;

	str_haystack = haystack;
	str_needle = needle;
	if (*str_needle != '\0' || )
	{
		needle_len = ft_strlen(needle);
		if ((*str_haystack == '\0') || len < 1)
			return (NULL);
		while (ft_strcmp(str_haystack, str_needle, str_needle) != 0)
		{
			while (*str_haystack++ != *str_needle)
				if ((*str_haystack == '\0') || len-- < 1)
					return (NULL);
			if (needle_len > len)
				return (NULL);
		}
		str_haystack--;
	}
	return (str_haystack);
}
