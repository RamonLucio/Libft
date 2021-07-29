int	ft_tolower(int c)
{
	unsigned char	*character;

	character = (unsigned char *) c;
	if ((character >= 'A') && (character <= 'Z'))
		return (character + 32);
	else
		return (c);
}
