int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;

	string1 = (const unsigned char *) s1;
	string2 = (const unsigned char *) s2;
	while (n-- != 0)
		if (*string1++ != *string++)
			return (*string1 - *string2);
	return (0);
}
