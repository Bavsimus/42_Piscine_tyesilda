#include <unistd.h>

int strlen(char *c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int miss;
	int len;

	i = 0;
	len = strlen(str) - 1;
	i--;
	while(str[i] != '\0')
	{
		miss = str[i];
		str[i] = str[len];
		str[len] = miss;
		i++;
		len--;
	}
	return (str);
}
