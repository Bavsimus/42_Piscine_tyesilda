#include <unistd.h>

int strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	int miss;

	i = 0;
	len = strlen(str) - 1;
	while (len > i)
	{
		miss = str[i];
		str[i] = str[len];
		str[len] = miss;
		i++;
		len--;
	}
	return (str);
}
