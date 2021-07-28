void	*memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	value;

	str = (unsigned char *) b;
	value = (unsigned char) c;
	while (len-- > 0)
		*str++ = value;
	return (b);
}
