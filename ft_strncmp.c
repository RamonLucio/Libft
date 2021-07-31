int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string1;

	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	while (n-- && ((*string1++ != '\0') && (*string2++ != '\0')))
		if (*string1 != *string2)
			return (string1 - string2);
	return (0);
}