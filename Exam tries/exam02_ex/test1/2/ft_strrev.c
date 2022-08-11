int ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	int miss;

	i = 0;
	len = ft_strlen(str);
	while(i > len)
	{
		miss = str[i];
		str[i] = str[len];
		str[len] = miss;
		i++;
		len--;
	}
	return (str);
}
