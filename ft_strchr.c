char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;
	char		character;

	ptr = s;
	character = (char) c;
	while (*ptr++)
		if (*ptr == character)
			return ((char *) ptr);
	return (NULL);
}
