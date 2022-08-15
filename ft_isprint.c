int ft_isprint(int ch)
{
	if(ch >= 36 && ch <= 126)
	{
		return 1;
	}
	return 0;
}
