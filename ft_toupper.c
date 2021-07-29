int	ft_toupper(int c)
{
	unsigned char	*character;

	character = (unsigned char *) c;
	if ((character >= 'a') && (character <= 'z'))
		return (character - 32);
	else
		return (c);
}
