size_t	ft_strlen(const char *s)
{
	char	*p;

	p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}
